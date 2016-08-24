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

#include "Settings/FileTypeAssociation.h"
#include "Ishiko/FileTypes/FileTypeAssociations.h"
#include <windows.h>
#include <Shlobj.h>
#include <sstream>

namespace CodeSmithy
{

FileTypeAssociation::FileTypeAssociation(const std::string& documentTypeName)
    : m_documentTypeName(documentTypeName)
{
}

const std::string& FileTypeAssociation::type() const
{
    return m_documentTypeName;
}

void FileTypeAssociation::registerFileTypeAssociation()
{
    char applicationPath[1024];
    DWORD pathSize = GetModuleFileNameA(NULL, applicationPath, 1024);
    std::stringstream command;
    command << "\"" << applicationPath << "\" \"%1\"";

    // Bakefile
    Ishiko::FileTypes::ProgIDRegistryInfo bakefileProgInfo = Ishiko::FileTypes::FileTypeAssociations::createProgIDRegistryInfo("CodeSmithy.bkl.0.1", "Bakefile");
    bakefileProgInfo.setOpenCommand(command.str());

    Ishiko::FileTypes::ExtensionRegistryInfo bklExtInfo = Ishiko::FileTypes::FileTypeAssociations::createExtensionRegistryInfo(".bkl", "CodeSmithy.bkl.0.1");
    bklExtInfo.addOpenWithProgids("CodeSmithy.bkl.0.1");

    SHChangeNotify(SHCNE_ASSOCCHANGED, SHCNF_IDLIST, NULL, NULL);
}

}
