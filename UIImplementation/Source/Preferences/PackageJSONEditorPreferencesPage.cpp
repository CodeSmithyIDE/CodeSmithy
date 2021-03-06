/*
    Copyright (c) 2017 Xavier Leclercq

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

#include "Preferences/PackageJSONEditorPreferencesPage.h"
#include "PreferencesDialogUtilities.h"
#include <wx/sizer.h>

namespace CodeSmithy
{
    
PackageJSONEditorPreferencesPage::PackageJSONEditorPreferencesPage(wxWindow *parent,
                                                                   AppSettings& appSettings)
    : EditorPreferencesBase(parent, appSettings, EditorId::PackageJSONEditorId,
        appSettings.editorSettings().packageJSONSettings()),
    m_newSettings(appSettings.editorSettings().packageJSONSettings())
{
    wxSizer* fontInfoSizer = PreferencesDialogUtilities::createFontSettingsSizer(m_overrideThemeCheckBox,
        m_fontFaceName, m_fontSize, m_fontButton);

    wxSizer* topSizer = GetSizer();
    topSizer->Add(fontInfoSizer, 0, wxEXPAND | wxALL, 10);
}

void PackageJSONEditorPreferencesPage::handleFontChanged(const std::string& faceName,
                                                         unsigned pointSize)
{
}

EditorSettingsBase& PackageJSONEditorPreferencesPage::newSettings()
{
    return m_newSettings;
}

bool PackageJSONEditorPreferencesPage::hasChanges() const
{
    return (m_appSettings.editorSettings().packageJSONSettings() != m_newSettings);
}

void PackageJSONEditorPreferencesPage::updateExample()
{
}

}
