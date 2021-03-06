/*
    Copyright (c) 2016-2019 Xavier Leclercq

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

#include "EditorThemeTests.h"
#include "CodeSmithy/UICore/Themes/EditorTheme.h"
#include "CodeSmithy/UICore/Themes/Theme.h"
#include "CodeSmithy/UICore/Themes/ThemesFileRepository.h"
#include <boost/filesystem/operations.hpp>

using namespace Ishiko::Tests;

EditorThemeTests::EditorThemeTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "EditorTheme tests", environment)
{
    append<HeapAllocationErrorsTest>("Creation test 1", CreationTest1);
    append<FileComparisonTest>("save test 1", SaveTest1);
}

void EditorThemeTests::CreationTest1(Test& test)
{
    CodeSmithy::EditorTheme editorTheme("EditorThemeCreationTest1");

    ISHTF_PASS();
}

void EditorThemeTests::SaveTest1(FileComparisonTest& test)
{
    boost::filesystem::path outputPath(test.environment().getTestOutputDirectory() / "ThemesTests/EditorThemeSaveTest1.csmththemes");
    boost::filesystem::remove(outputPath);
    boost::filesystem::path referencePath(test.environment().getReferenceDataDirectory() / "ThemesTests/EditorThemeSaveTest1.csmththemes");

    CodeSmithy::ThemesFileRepository repository(outputPath);

    std::shared_ptr<CodeSmithy::ThemesRepositoryNode> themeNode = repository.addThemeNode("Theme1");
    if (themeNode)
    {
        CodeSmithy::Theme theme(themeNode);
        CodeSmithy::EditorTheme editorTheme("Editor1");
        theme.setEditorTheme(editorTheme);
    }

    repository.save();

    test.setOutputFilePath(outputPath);
    test.setReferenceFilePath(referencePath);

    ISHTF_PASS();
}
