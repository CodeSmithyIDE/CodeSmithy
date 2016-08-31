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

#include "DocumentsTestSequence.h"
#include "BakefileTypeTests.h"
#include "BakefileTests.h"
#include "CMakeListsTypeTests.h"
#include "CMakeListsTests.h"
#include "CodeSmithyProjectFileTypeTests.h"
#include "CodeSmithyProjectFileTests.h"
#include "CppFileTypeTests.h"
#include "CppFileTests.h"
#include "XMLDocumentTypeTests.h"
#include "XMLDocumentTests.h"
#include "DocumentTypesTests.h"
#include "DocumentsTests.h"
#include "DocumentsObserverTests.h"

void AddDocumentsTestSequence(TestHarness& theTestHarness)
{
    TestSequence& documentsTestSequence = theTestHarness.appendTestSequence("Documents tests");

    AddBakefileTypeTests(documentsTestSequence);
    AddBakefileTests(documentsTestSequence);
    AddCMakeListsTypeTests(documentsTestSequence);
    AddCMakeListsTests(documentsTestSequence);
    AddCodeSmithyProjectFileTypeTests(documentsTestSequence);
    AddCodeSmithyProjectFileTests(documentsTestSequence);
    AddCppFileTypeTests(documentsTestSequence);
    AddCppFileTests(documentsTestSequence);
    AddXMLDocumentTypeTests(documentsTestSequence);
    AddXMLDocumentTests(documentsTestSequence);
    AddDocumentTypesTests(documentsTestSequence);
    AddDocumentsTests(documentsTestSequence);
    AddDocumentsObserverTests(documentsTestSequence);
}