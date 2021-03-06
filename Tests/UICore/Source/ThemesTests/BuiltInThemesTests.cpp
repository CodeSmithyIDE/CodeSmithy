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

#include "BuiltInThemesTests.h"
#include "CodeSmithy/UICore/Themes/BuiltInThemes.h"
#include "CodeSmithy/UICore/Themes/ThemesFileRepository.h"
#include <boost/filesystem/operations.hpp>

using namespace Ishiko::Tests;

BuiltInThemesTests::BuiltInThemesTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "BuiltInThemes tests", environment)
{
    append<FileComparisonTest>("addCodeSmithyLightThemeNode test 1", AddCodeSmithyLightThemeNodeTest1);
    append<FileComparisonTest>("addCodeSmithyDarkThemeNode test 1", AddCodeSmithyDarkThemeNodeTest1);
    append<FileComparisonTest>("createDefaultThemesFileRepository test 1", CreateDefaultThemesFileRepositoryTest1);
}

void BuiltInThemesTests::AddCodeSmithyLightThemeNodeTest1(FileComparisonTest& test)
{
    boost::filesystem::path outputPath(test.environment().getTestOutputDirectory() / "ThemesTests/BuiltInThemesAddCodeSmithyLightThemeNodeTest1.csmththemes");
    boost::filesystem::remove(outputPath);
    boost::filesystem::path referencePath(test.environment().getReferenceDataDirectory() / "ThemesTests/BuiltInThemesAddCodeSmithyLightThemeNodeTest1.csmththemes");

    CodeSmithy::ThemesFileRepository repository(outputPath);
    CodeSmithy::BuiltInThemes::addCodeSmithyLightThemeNode(repository);
    repository.save();

    test.setOutputFilePath(outputPath);
    test.setReferenceFilePath(referencePath);

    ISHTF_PASS();
}

void BuiltInThemesTests::AddCodeSmithyDarkThemeNodeTest1(FileComparisonTest& test)
{
    boost::filesystem::path outputPath(test.environment().getTestOutputDirectory() / "ThemesTests/BuiltInThemesAddCodeSmithyDarkThemeNodeTest1.csmththemes");
    boost::filesystem::remove(outputPath);
    boost::filesystem::path referencePath(test.environment().getReferenceDataDirectory() / "ThemesTests/BuiltInThemesAddCodeSmithyDarkThemeNodeTest1.csmththemes");

    CodeSmithy::ThemesFileRepository repository(outputPath);
    CodeSmithy::BuiltInThemes::addCodeSmithyDarkThemeNode(repository);
    repository.save();

    test.setOutputFilePath(outputPath);
    test.setReferenceFilePath(referencePath);

    ISHTF_PASS();
}

void BuiltInThemesTests::CreateDefaultThemesFileRepositoryTest1(FileComparisonTest& test)
{
    boost::filesystem::path outputPath(test.environment().getTestOutputDirectory() / "ThemesTests/BuiltInThemesCreateDefaultThemesFileRepositoryTest1.csmththemes");
    boost::filesystem::remove(outputPath);
    boost::filesystem::path referencePath(test.environment().getReferenceDataDirectory() / "ThemesTests/BuiltInThemesCreateDefaultThemesFileRepositoryTest1.csmththemes");

    CodeSmithy::BuiltInThemes::createDefaultThemesFileRepository(outputPath);

    test.setOutputFilePath(outputPath);
    test.setReferenceFilePath(referencePath);

    ISHTF_PASS();
}
