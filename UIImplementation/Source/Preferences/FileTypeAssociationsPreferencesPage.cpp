/*
    Copyright (c) 2015-2017 Xavier Leclercq

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

#include "Preferences/FileTypeAssociationsPreferencesPage.h"
#include "WindowIDs.h"

namespace CodeSmithy
{

FileTypeAssociationsPreferencesPage::FileTypeAssociationsPreferencesPage(wxWindow *parent, 
                                                                         AppSettings& appSettings)
    : wxPanel(parent, wxID_ANY), m_appSettings(appSettings),
    m_applyButton(0)
{
    wxBoxSizer* topSizer = new wxBoxSizer(wxVERTICAL);

    wxStaticText* description = CreateDescription(this);

    wxFlexGridSizer* fileTypeAssociationsSizer = new wxFlexGridSizer(4, 5, 10);

    FileTypeAssociations& associations = m_appSettings.fileTypeAssociations();

    addTitleRow(this, fileTypeAssociationsSizer);
    
    bool discrepancyDetected = false;
    for (size_t i = 0; i < associations.size(); ++i)
    {
        std::shared_ptr<const DocumentType> documentType = m_appSettings.documentTypes().find(associations[i]->documentTypeName());
        if (documentType)
        {
            bool isDefault = false;
            bool isRegistered = m_appSettings.isFileTypeAssociationRegistered(associations[i]->documentTypeName(), isDefault);
            FileTypeAssociation::EAssociation association = FileTypeAssociation::eDisabled;
            if (isRegistered)
            {
                if (isDefault)
                {
                    association = FileTypeAssociation::eOpen;
                }
                else
                {
                    association = FileTypeAssociation::eOpenWith;
                }
            }
            if (association != associations[i]->association())
            {
                associations[i]->setAssociation(association);
                discrepancyDetected = true;
            }

            wxStaticText* fileTypeName = new wxStaticText(this, wxID_ANY, getFileTypeAndExtensions(*documentType));

            wxArrayString actionChoices;
            actionChoices.Add("Disabled");
            actionChoices.Add("Open");
            actionChoices.Add("Open With");
            wxChoice* actionChoice = new wxChoice(this, wxID_ANY,
                wxDefaultPosition, wxDefaultSize, actionChoices);
            if (isRegistered)
            {
                if (isDefault)
                {
                    actionChoice->SetSelection(1);
                }
                else
                {
                    actionChoice->SetSelection(2);
                }
            }
            else
            {
                actionChoice->SetSelection(0);
            }

            wxArrayString projectChoices;
            projectChoices.Add("Ask at startup");
            projectChoices.Add("Standalone");
            for (size_t j = 0; j < m_appSettings.projectTypes().size(); ++j)
            {
                projectChoices.Add(m_appSettings.projectTypes()[j]->name());
            }
            wxChoice* projectChoice = new wxChoice(this, wxID_ANY,
                wxDefaultPosition, wxSize(200, wxDefaultCoord), projectChoices);
            if (associations[i]->actionType() == FileTypeAssociation::eAskAtStartup)
            {
                projectChoice->SetSelection(0);
            }
            else if (associations[i]->actionType() == FileTypeAssociation::eStandalone)
            {
                projectChoice->SetSelection(1);
            }
            else
            {
                int n = projectChoice->FindString(associations[i]->associatedProjectTypeName());
                if (n >= 2)
                {
                    projectChoice->SetSelection(n);
                }
            }

            std::string shellNewRegisteredExtension;
            bool isShellNewRegistered = false;
            if (isRegistered)
            {
                // If the file types are not registered we shouldn't set the Shell New either
                // so skip this check and leave isShellNewRegistered to false.
                // In theory this check should return false anyway since the type is not registered
                // but we don't want to assume the registry is a consistent state.
                isShellNewRegistered = m_appSettings.isShellNewRegistered(associations[i]->documentTypeName(), shellNewRegisteredExtension);
            }
            wxArrayString newChoices;
            newChoices.Add("None");
            const std::vector<std::string>& extensions = documentType->extensions();
            for (size_t i = 0; i < extensions.size(); ++i)
            {
                newChoices.Add(extensions[i]);
            }
            wxChoice* newChoice = new wxChoice(this, wxID_ANY,
                wxDefaultPosition, wxSize(100, wxDefaultCoord), newChoices);
            if (!isShellNewRegistered)
            {
                newChoice->SetSelection(0);
            }
            else
            {
                int n = newChoice->FindString(shellNewRegisteredExtension);
                if (n >= 1)
                {
                    newChoice->SetSelection(n);
                }
            }
            if (!isRegistered)
            {
                // If the file types are not registered then it should not be 
                // possible for the user to enable the Shell New menu.
                newChoice->Disable();
            }
            if (shellNewRegisteredExtension != associations[i]->shellNewExtension())
            {
                associations[i]->setShellNewExtension(shellNewRegisteredExtension);
                discrepancyDetected = true;
            }

            actionChoice->Bind(wxEVT_CHOICE, &FileTypeAssociationsPreferencesPage::onAssociationChanged, this, -1, -1, new CustomEventHandlerData(associations[i]->documentTypeName(), actionChoice, projectChoice, newChoice));
            projectChoice->Bind(wxEVT_CHOICE, &FileTypeAssociationsPreferencesPage::onAssociationChanged, this, -1, -1, new CustomEventHandlerData(associations[i]->documentTypeName(), actionChoice, projectChoice, newChoice));
            newChoice->Bind(wxEVT_CHOICE, &FileTypeAssociationsPreferencesPage::onAssociationChanged, this, -1, -1, new CustomEventHandlerData(associations[i]->documentTypeName(), actionChoice, projectChoice, newChoice));

            fileTypeAssociationsSizer->Add(fileTypeName, 0, wxEXPAND);
            fileTypeAssociationsSizer->Add(actionChoice, 0, wxEXPAND);
            fileTypeAssociationsSizer->Add(projectChoice, 0, wxEXPAND);
            fileTypeAssociationsSizer->Add(newChoice, 0, wxEXPAND);
        }
    }
    if (discrepancyDetected)
    {
        m_appSettings.save();
    }

    m_applyButton = new wxButton(this, PreferencesFileTypeAssociationsApplyButtonID, "Apply");
    m_applyButton->Disable();

    topSizer->Add(description, 0, wxEXPAND | wxALL, 10);
    topSizer->Add(fileTypeAssociationsSizer, 0, wxALL, 10);
    topSizer->Add(m_applyButton);

    SetSizer(topSizer);
}

wxStaticText* FileTypeAssociationsPreferencesPage::CreateDescription(wxWindow *parent)
{
    wxStaticText* description = new wxStaticText(parent, wxID_ANY, "jjjj");
    description->SetBackgroundColour(*wxWHITE);
    description->SetWindowStyle(wxBORDER_SIMPLE);
    return description;
}

void FileTypeAssociationsPreferencesPage::addTitleRow(wxWindow *parent, 
                                                      wxFlexGridSizer* fileTypeAssociationsSizer)
{
    wxStaticText* fileTypeName = new wxStaticText(parent, wxID_ANY, "Type and extensions");
    fileTypeAssociationsSizer->Add(fileTypeName, 0, wxEXPAND);
    wxStaticText* actionChoice = new wxStaticText(parent, wxID_ANY, "Association");
    fileTypeAssociationsSizer->Add(actionChoice, 0, wxEXPAND);
    wxStaticText* projectChoice = new wxStaticText(parent, wxID_ANY, "Associated Project Type");
    fileTypeAssociationsSizer->Add(projectChoice, 0, wxEXPAND);
    wxStaticText* newChoice = new wxStaticText(parent, wxID_ANY, "New Context Menu");
    fileTypeAssociationsSizer->Add(newChoice, 0, wxEXPAND);
}

std::string FileTypeAssociationsPreferencesPage::getFileTypeAndExtensions(const DocumentType& type)
{
    std::string result = type.name();
    result.append(" (");
    const std::vector<std::string>& extensions = type.extensions();
    for (size_t i = 0; i < extensions.size(); ++i)
    {
        if (i != 0)
        {
            result.append(";");
        }
        result.append("*.");
        result.append(type.extensions()[i]);
    }
    result.append(")");
    return result;
}

void FileTypeAssociationsPreferencesPage::onAssociationChanged(wxCommandEvent& evt)
{
    CustomEventHandlerData* data = dynamic_cast<CustomEventHandlerData*>(evt.GetEventUserData());
    if (data)
    {
        std::shared_ptr<FileTypeAssociation> association = std::make_shared<FileTypeAssociation>(data->documentTypeName());
        association->setAssociation(data->association());
        association->setAction(data->actionType(), data->projectName());
        if (data->association() == FileTypeAssociation::eDisabled)
        {
            association->setShellNewExtension("");
        }
        else
        {
            association->setShellNewExtension(data->shellNewExtension());
        }
        m_updatedFileTypeAssociations.set(association);

        if (data->association() == FileTypeAssociation::eDisabled)
        {
            data->newChoice()->SetSelection(0);
            data->newChoice()->Disable();
        }
        else
        {
            data->newChoice()->Enable();
        }
    }
    if (m_updatedFileTypeAssociations.size() != 0)
    {
        m_applyButton->Enable();
    }
    else
    {
        m_applyButton->Disable();
    }
}

void FileTypeAssociationsPreferencesPage::onApply(wxCommandEvent& evt)
{
    bool needsSaving = false;
    for (size_t i = 0; i < m_updatedFileTypeAssociations.size(); ++i)
    {
        std::shared_ptr<FileTypeAssociation> existingAssociation = m_appSettings.fileTypeAssociations().find(m_updatedFileTypeAssociations[i]->documentTypeName());
        if (existingAssociation)
        {
            if (*existingAssociation != *m_updatedFileTypeAssociations[i])
            {
                std::string shellNewRegisteredExtension = existingAssociation->shellNewExtension();
                *existingAssociation = *m_updatedFileTypeAssociations[i];
                if (m_updatedFileTypeAssociations[i]->association() == FileTypeAssociation::eDisabled)
                {
                    m_appSettings.deregisterFileTypeAssociation(m_updatedFileTypeAssociations[i]->documentTypeName());
                }
                else
                {
                    m_appSettings.registerFileTypeAssociation(m_updatedFileTypeAssociations[i]->documentTypeName());
                }
                if (m_updatedFileTypeAssociations[i]->shellNewExtension().empty())
                {
                    m_appSettings.deregisterShellNew(shellNewRegisteredExtension);
                }
                else
                {
                    m_appSettings.registerShellNew(m_updatedFileTypeAssociations[i]->shellNewExtension());
                }
                needsSaving = true;
            }
        }
    }
    if (needsSaving)
    {
        m_appSettings.save();
    }
    m_updatedFileTypeAssociations.clear();
    m_applyButton->Disable();
}

FileTypeAssociationsPreferencesPage::CustomEventHandlerData::CustomEventHandlerData(const std::string& documentTypeName, 
                                                                                    wxChoice* associationChoice,
                                                                                    wxChoice* actionChoice, 
                                                                                    wxChoice* newChoice)
    : m_documentTypeName(documentTypeName), m_associationChoice(associationChoice), m_actionChoice(actionChoice),
    m_newChoice(newChoice)
{
}

const std::string& FileTypeAssociationsPreferencesPage::CustomEventHandlerData::documentTypeName() const
{
    return m_documentTypeName;
}

FileTypeAssociation::EAssociation FileTypeAssociationsPreferencesPage::CustomEventHandlerData::association() const
{
    switch (m_associationChoice->GetSelection())
    {
    case 0:
        return FileTypeAssociation::eDisabled;

    case 1:
        return FileTypeAssociation::eOpen;

    case 2:
        return FileTypeAssociation::eOpenWith;

    default:
        return FileTypeAssociation::eDisabled;
    }
}

FileTypeAssociation::EActionType FileTypeAssociationsPreferencesPage::CustomEventHandlerData::actionType() const
{
    switch (m_actionChoice->GetSelection())
    {
    case 0:
        return FileTypeAssociation::eAskAtStartup;

    case 1:
        return FileTypeAssociation::eStandalone;

    default:
        return FileTypeAssociation::eProjectType;
    }
}

std::string FileTypeAssociationsPreferencesPage::CustomEventHandlerData::projectName() const
{
    if (m_actionChoice->GetSelection() >= 2)
    {
        return m_actionChoice->GetStringSelection();
    }
    else
    {
        return "";
    }
}

std::string FileTypeAssociationsPreferencesPage::CustomEventHandlerData::shellNewExtension() const
{
    if (m_newChoice->GetSelection() >= 1)
    {
        return m_newChoice->GetStringSelection();
    }
    else
    {
        return "";
    }
}

wxChoice* FileTypeAssociationsPreferencesPage::CustomEventHandlerData::newChoice()
{
    return m_newChoice;
}

wxBEGIN_EVENT_TABLE(FileTypeAssociationsPreferencesPage, wxPanel)
    EVT_BUTTON(PreferencesFileTypeAssociationsApplyButtonID, FileTypeAssociationsPreferencesPage::onApply)
wxEND_EVENT_TABLE()

}
