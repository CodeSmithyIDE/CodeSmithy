/*
    Copyright (c) 2015-2018 Xavier Leclercq

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

#include "App.h"
#include "CodeSmithy/UIImplementation/Frame.h"
#include "CodeSmithy/UIImplementation/ControlCreationDocumentTypeData.h"
#include "CodeSmithy/UIElements/Editors/BakefileCtrl.h"
#include "CodeSmithy/UIElements/Editors/BinaryFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/CMakeListsCtrl.h"
#include "CodeSmithy/UIElements/Editors/CppFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/HTMLDocumentCtrl.h"
#include "CodeSmithy/UIElements/Editors/JavaFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/JavaScriptFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/PackageJSONFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/PowerShellFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/PythonFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/PugFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/TextFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/WiXSourceFileCtrl.h"
#include "CodeSmithy/UIElements/Editors/XMLDocumentCtrl.h"
#include "CodeSmithy/Core/Documents/BakefileType.h"
#include "CodeSmithy/Core/Documents/BinaryFileType.h"
#include "CodeSmithy/Core/Documents/CMakeListsType.h"
#include "CodeSmithy/Core/Documents/CodeSmithyProjectFileType.h"
#include "CodeSmithy/Core/Documents/CppFileType.h"
#include "CodeSmithy/Core/Documents/HTMLDocumentType.h"
#include "CodeSmithy/Core/Documents/JavaScriptFileType.h"
#include "CodeSmithy/Core/Documents/JavaSourceFileType.h"
#include "CodeSmithy/Core/Documents/PackageJSONFileType.h"
#include "CodeSmithy/Core/Documents/PowerShellFileType.h"
#include "CodeSmithy/Core/Documents/PugFileType.h"
#include "CodeSmithy/Core/Documents/PythonFileType.h"
#include "CodeSmithy/Core/Documents/TextFileType.h"
#include "CodeSmithy/Core/Documents/WiXSourceFileType.h"
#include "CodeSmithy/Core/Documents/XMLDocumentType.h"
#include "CodeSmithy/Core/Projects/Bakefile/BakefileProjectType.h"
#include "CodeSmithy/Core/Projects/CMake/CMakeProjectType.h"
#include "CodeSmithy/Core/Projects/WiX/WiXProjectType.h"

namespace CodeSmithy
{

wxIMPLEMENT_APP(App);

App::App()
{
    // This is the list of document types supported by the
    // the CodeSmithy UI.
    m_documentTypes = std::make_shared<DocumentTypes>();
    m_documentTypes->add(std::make_shared<BakefileType>(std::make_shared<ControlCreationDocumentTypeData>(BakefileCtrl::Create)));
    m_documentTypes->add(std::make_shared<BinaryFileType>(std::make_shared<ControlCreationDocumentTypeData>(BinaryFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<CMakeListsType>(std::make_shared<ControlCreationDocumentTypeData>(CMakeListsCtrl::Create)));
    m_documentTypes->add(std::make_shared<CodeSmithyProjectFileType>());
    m_documentTypes->add(std::make_shared<CppFileType>(std::make_shared<ControlCreationDocumentTypeData>(CppFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<HTMLDocumentType>(std::make_shared<ControlCreationDocumentTypeData>(HTMLDocumentCtrl::Create)));
    m_documentTypes->add(std::make_shared<JavaSourceFileType>(std::make_shared<ControlCreationDocumentTypeData>(JavaFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<JavaScriptFileType>(std::make_shared<ControlCreationDocumentTypeData>(JavaScriptFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<PackageJSONFileType>(std::make_shared<ControlCreationDocumentTypeData>(PackageJSONFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<PowerShellFileType>(std::make_shared<ControlCreationDocumentTypeData>(PowerShellFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<PugFileType>(std::make_shared<ControlCreationDocumentTypeData>(PugFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<PythonFileType>(std::make_shared<ControlCreationDocumentTypeData>(PythonFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<TextFileType>(std::make_shared<ControlCreationDocumentTypeData>(TextFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<WiXSourceFileType>(std::make_shared<ControlCreationDocumentTypeData>(WiXSourceFileCtrl::Create)));
    m_documentTypes->add(std::make_shared<XMLDocumentType>(std::make_shared<ControlCreationDocumentTypeData>(XMLDocumentCtrl::Create)));

    // This is the list of project types supported by the
    // the CodeSmithy UI. There is no dynamic way to add project
    // types (via plugins for instance) at this stage.
    m_projectTypes = std::make_shared<ProjectTypes>();
    m_projectTypes->add(std::make_shared<BakefileProjectType>(*m_documentTypes));
    m_projectTypes->add(std::make_shared<CMakeProjectType>(*m_documentTypes));
    m_projectTypes->add(std::make_shared<WiXProjectType>(*m_documentTypes));
}

bool App::OnInit()
{
#ifdef _WIN32
    m_singleInstanceChecker = new wxSingleInstanceChecker();
    if (m_singleInstanceChecker->CreateDefault() && 
        m_singleInstanceChecker->IsAnotherRunning())
    {
        if ((argc == 2) && (strcmp(argv[1], "/restart") != 0) && (strcmp(argv[1], "--bootstrap") != 0))
        {
            wxClient client;
            bool success = false;
            wxConnectionBase *connection = client.MakeConnection("localhost", "4242", "a_topic");
            if (connection)
            {
                success = connection->Execute(argv[1]);
                delete connection;
            }

            if (success)
            {
                delete m_singleInstanceChecker;
                m_singleInstanceChecker = 0;
                return false;
            }
        }
    }

    m_appServer = new AppServer();
    m_appServer->Create("4242");
#endif

    Frame* frame = new Frame(L"CodeSmithy", *m_documentTypes, *m_projectTypes);
    frame->Show(true);
    if (m_appServer)
    {
        m_appServer->setFrame(frame);
    }

    if ((argc == 2) && (strcmp(argv[1], "/restart") != 0) && (strcmp(argv[1], "--bootstrap") != 0))
    {
        frame->OpenFile(argv[1]);
    }
    else if ((argc == 2) && (strcmp(argv[1], "--bootstrap") == 0))
    {
        frame->Bootstrap();
    }

    return true;
}

int App::OnExit()
{
    delete m_appServer;
    m_appServer = 0;
    delete m_singleInstanceChecker;
    m_singleInstanceChecker = 0;
    return wxApp::OnExit();
}

}
