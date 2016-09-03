/*
    Copyright (c) 2015-2016 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "Preferences/CppEditorPreferencesPage.h"
#include "WindowIDs.h"
#include <wx/sizer.h>
#include <wx/fontdlg.h>

namespace CodeSmithy
{

CppEditorPreferencesPage::CppEditorPreferencesPage(wxWindow *parent,
                                                   AppSettings& appSettings)
    : wxPanel(parent, wxID_ANY), m_appSettings(appSettings),
    m_fontFaceName(0), m_fontSize(0), m_applyButton(0)
{
    wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);

    m_fontFaceName = new wxTextCtrl(this, wxID_ANY);
    m_fontFaceName->SetValue(appSettings.editorSettings().cppSettings().fontSettings().faceName());
    m_fontSize = new wxSpinCtrl(this, PreferencesCppEditorSizeSelectionButtonID, wxEmptyString, wxDefaultPosition, wxSize(50, wxDefaultCoord));
    m_fontSize->SetMin(6);
    m_fontSize->SetMax(30);
    m_fontSize->SetValue(appSettings.editorSettings().cppSettings().fontSettings().pointSize());
    wxButton* fontButton = new wxButton(this, PreferencesCppEditorFontSelectionButtonID, "Select Font...");

    m_formatExample = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxSize(wxDefaultCoord, 150), wxTE_MULTILINE);
    m_formatExample->SetValue("int main(int argc, char* argv[])\r\n{\r\n\treturn 0;\r\n}\r\n");
    wxFont font = m_formatExample->GetFont();
    font.SetFaceName(appSettings.editorSettings().cppSettings().fontSettings().faceName());
    font.SetPointSize(appSettings.editorSettings().cppSettings().fontSettings().pointSize());
    m_formatExample->SetFont(font);

    wxBoxSizer* fontInfoSizer = new wxBoxSizer(wxHORIZONTAL);
    fontInfoSizer->Add(m_fontFaceName, 1, wxALL, 2);
    fontInfoSizer->Add(m_fontSize, 0, wxALL, 2);
    fontInfoSizer->Add(fontButton, 0, wxALL, 2);

    m_applyButton = new wxButton(this, PreferencesCppEditorPreferencesApplyButtonID, "Apply");
    m_applyButton->Disable();

    topSizer->Add(fontInfoSizer, 0, wxEXPAND | wxALL, 10);
    topSizer->Add(m_formatExample, 0, wxEXPAND | wxALL, 2);
    topSizer->Add(m_applyButton);

    SetSizer(topSizer);
}

void CppEditorPreferencesPage::onPointSizeChanged(wxSpinEvent& evt)
{
    unsigned int newPointSize = evt.GetValue();
    wxFont font = m_formatExample->GetFont();
    font.SetPointSize(newPointSize);
    m_formatExample->SetFont(font);

    if (newPointSize != m_appSettings.editorSettings().cppSettings().fontSettings().pointSize())
    {
        m_applyButton->Enable();
    }
    else if (m_fontFaceName->GetValue() == m_appSettings.editorSettings().cppSettings().fontSettings().faceName())
    {
        m_applyButton->Disable();
    }
}

void CppEditorPreferencesPage::onSelectFont(wxCommandEvent& evt)
{
    wxFontDialog* fontDialog = new wxFontDialog(this);
    wxFontData& fontData = fontDialog->GetFontData();
    wxFont font = fontData.GetInitialFont();
    font.SetFaceName(m_fontFaceName->GetValue());
    font.SetPointSize(m_fontSize->GetValue());
    fontData.SetInitialFont(font);

    if (fontDialog->ShowModal() == wxID_OK)
    {
        wxFontData data = fontDialog->GetFontData();
        m_fontFaceName->SetValue(data.GetChosenFont().GetFaceName());
        m_fontSize->SetValue(data.GetChosenFont().GetPointSize());
        m_formatExample->SetFont(data.GetChosenFont());
    }

    fontDialog->Destroy();
}

void CppEditorPreferencesPage::onApply(wxCommandEvent& evt)
{
    FontSettings& fontSettings = m_appSettings.editorSettings().cppSettings().fontSettings();
    std::string faceName = m_fontFaceName->GetValue();
    fontSettings.setFaceName(faceName);
    fontSettings.setPointSize(m_fontSize->GetValue());
    m_appSettings.save();
    m_applyButton->Disable();
}

wxBEGIN_EVENT_TABLE(CppEditorPreferencesPage, wxPanel)
    EVT_SPINCTRL(PreferencesCppEditorSizeSelectionButtonID, CppEditorPreferencesPage::onPointSizeChanged)
    EVT_BUTTON(PreferencesCppEditorFontSelectionButtonID, CppEditorPreferencesPage::onSelectFont)
    EVT_BUTTON(PreferencesCppEditorPreferencesApplyButtonID, CppEditorPreferencesPage::onApply)
wxEND_EVENT_TABLE()

}
