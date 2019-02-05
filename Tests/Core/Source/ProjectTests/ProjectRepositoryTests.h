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

#ifndef _CODESMITHY_TEST_CORE_PROJECTTESTS_PROJECTFILEREPOSITORYTESTS_H_
#define _CODESMITHY_TEST_CORE_PROJECTTESTS_PROJECTFILEREPOSITORYTESTS_H_

#include "Ishiko/TestFramework/TestFrameworkCore.h"

class ProjectRepositoryTests
{
public:
    static void AddTests(Ishiko::TestFramework::TestSequence& testSequence);

private:
    static Ishiko::TestFramework::TestResult::EOutcome CreationTest1(Ishiko::TestFramework::FileComparisonTest& test);
    static Ishiko::TestFramework::TestResult::EOutcome CreationTest2(Ishiko::TestFramework::Test& test);
    static Ishiko::TestFramework::TestResult::EOutcome CreationTest3(Ishiko::TestFramework::Test& test);
    static Ishiko::TestFramework::TestResult::EOutcome SetNameTest1(Ishiko::TestFramework::FileComparisonTest& test);
    static Ishiko::TestFramework::TestResult::EOutcome AddProjectNodeTest1(Ishiko::TestFramework::FileComparisonTest& test);
    static Ishiko::TestFramework::TestResult::EOutcome GetProjectNodeTest1(Ishiko::TestFramework::Test& test);
};

#endif