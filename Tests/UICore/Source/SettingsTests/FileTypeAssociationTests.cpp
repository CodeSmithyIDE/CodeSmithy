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

#include "FileTypeAssociationTests.h"
#include "CodeSmithy/UICore/Settings/FileTypeAssociation.h"

using namespace Ishiko::Tests;

FileTypeAssociationTests::FileTypeAssociationTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "FileTypeAssociation tests", environment)
{
    append<HeapAllocationErrorsTest>("Creation test 1", CreationTest1);
    append<HeapAllocationErrorsTest>("Creation test 2", CreationTest2);
    append<HeapAllocationErrorsTest>("operator= test 1", AssignmentTest1);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityTest1);
    append<HeapAllocationErrorsTest>("operator== test 2", EqualityTest2);
}

void FileTypeAssociationTests::CreationTest1(Test& test)
{
    CodeSmithy::FileTypeAssociation association("dummyTypeName");
    if ((association.documentTypeName() == "dummyTypeName") &&
        (association.association() == CodeSmithy::FileTypeAssociation::eDisabled) &&
        (association.actionType() == CodeSmithy::FileTypeAssociation::eAskAtStartup) &&
        (association.associatedProjectTypeName() == ""))
    {
        return TestResult::ePassed;
    }
    else
    {
        return TestResult::eFailed;
    }
}

void FileTypeAssociationTests::CreationTest2(Test& test)
{
    CodeSmithy::FileTypeAssociation association1("dummyTypeName");
    CodeSmithy::FileTypeAssociation association2(association1);
    if ((association1.documentTypeName() == "dummyTypeName") &&
        (association1.association() == CodeSmithy::FileTypeAssociation::eDisabled) &&
        (association1.actionType() == CodeSmithy::FileTypeAssociation::eAskAtStartup) &&
        (association1.associatedProjectTypeName() == "") &&
        (association2.documentTypeName() == "dummyTypeName") &&
        (association2.association() == CodeSmithy::FileTypeAssociation::eDisabled) &&
        (association2.actionType() == CodeSmithy::FileTypeAssociation::eAskAtStartup) &&
        (association2.associatedProjectTypeName() == ""))
    {
        return TestResult::ePassed;
    }
    else
    {
        return TestResult::eFailed;
    }
}

void FileTypeAssociationTests::AssignmentTest1(Test& test)
{
    CodeSmithy::FileTypeAssociation association1("dummyTypeName1");
    CodeSmithy::FileTypeAssociation association2("dummyTypeName2");
    association2 = association1;
    if ((association2.documentTypeName() == "dummyTypeName1") &&
        (association2.association() == CodeSmithy::FileTypeAssociation::eDisabled) &&
        (association2.actionType() == CodeSmithy::FileTypeAssociation::eAskAtStartup) &&
        (association2.associatedProjectTypeName() == ""))
    {
        return TestResult::ePassed;
    }
    else
    {
        return TestResult::eFailed;
    }
}

void FileTypeAssociationTests::EqualityTest1(Test& test)
{
    CodeSmithy::FileTypeAssociation association1("dummyTypeName1");
    CodeSmithy::FileTypeAssociation association2("dummyTypeName1");
    if (association1 == association2)
    {
        return TestResult::ePassed;
    }
    else
    {
        return TestResult::eFailed;
    }
}

void FileTypeAssociationTests::EqualityTest2(Test& test)
{
    CodeSmithy::FileTypeAssociation association1("dummyTypeName1");
    CodeSmithy::FileTypeAssociation association2("dummyTypeName2");
    if (association1 == association2)
    {
        return TestResult::eFailed;
    }
    else
    {
        return TestResult::ePassed;
    }
}
