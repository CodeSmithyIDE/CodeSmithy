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

#ifndef _CODESMITHY_UI_APP_H_
#define _CODESMITHY_UI_APP_H_

#include "CodeSmithy/UIImplementation/AppServer.h"
#include "CodeSmithy/Core/Documents/DocumentTypes.h"
#include "CodeSmithy/Core/Projects/ProjectTypes.h"
#include <wx/app.h>
#include <wx/snglinst.h>

namespace CodeSmithy
{

///  The CodeSmithy application class.
/**
    As is typical for a wxWidgets application CodeSmithy defines
    a class derived from wxApp.
*/
class App : public wxApp
{
public:
    App();

    bool OnInit() wxOVERRIDE;
    int OnExit() wxOVERRIDE;

private:
    wxSingleInstanceChecker* m_singleInstanceChecker;
    AppServer* m_appServer;
    std::shared_ptr<DocumentTypes> m_documentTypes;
    std::shared_ptr<ProjectTypes> m_projectTypes;
};

wxDECLARE_APP(App);

}

#endif
