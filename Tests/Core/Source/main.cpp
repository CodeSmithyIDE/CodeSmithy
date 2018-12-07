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

#include "DocumentsTests/DocumentsTestSequence.h"
#include "ProjectTests/ProjectTests.h"
#include "ProjectTemplatesTests/ProjectTemplatesTestSequence.h"
#include "WorkspacesTests/WorkspacesTestSequence.h"
#include "VersionControlTests/VersionControlTests.h"
#include "BootstrapTests/BootstrapTests.h"
#include "Ishiko/TestFramework/TestFrameworkCore.h"
#include <boost/filesystem/operations.hpp>

int main(int argc, char* argv[])
{
    Ishiko::TestFramework::TestHarness theTestHarness("CodeSmithyCore");

    theTestHarness.environment().setTestDataDirectory("../../TestData");
    theTestHarness.environment().setTestOutputDirectory("../../TestOutput");
    boost::filesystem::create_directories("../../TestOutput");
    theTestHarness.environment().setReferenceDataDirectory("../../ReferenceData");

    AddDocumentsTestSequence(theTestHarness);
    AddProjectTests(theTestHarness);
    AddProjectTemplatesTestSequence(theTestHarness);
    AddWorkspacesTestSequence(theTestHarness);
    AddVersionControlTests(theTestHarness);
    BootstrapTests::AddTests(theTestHarness);

    return theTestHarness.run();
}
