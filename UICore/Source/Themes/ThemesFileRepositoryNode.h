/*
    Copyright (c) 2016 Xavier Leclercq

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

#ifndef _CODESMITHY_UICORE_THEMES_THEMESFILEREPOSITORYNODE_H_
#define _CODESMITHY_UICORE_THEMES_THEMESFILEREPOSITORYNODE_H_

#include "Themes/ThemesRepositoryNode.h"
#include <pugixml.hpp>

namespace CodeSmithy
{

class ThemesFileRepositoryNode : public ThemesRepositoryNode
{
public:
    ThemesFileRepositoryNode(pugi::xml_node node);
    ~ThemesFileRepositoryNode() override;

    std::string themeName() const override;
    std::shared_ptr<EditorTheme> getEditorTheme(const std::string& editorId) const override;
    bool hasEditorTheme(const std::string& editorId) const override;

    void setEditorTheme(const EditorTheme& editorTheme) override;

private:
    pugi::xml_node m_node;
};

}

#endif
