# This file was automatically generated by bakefile.
#
# Any manual changes will be lost if it is regenerated,
# modify the source .bkl file instead if possible.

# You may define standard make variables such as CFLAGS or
# CXXFLAGS to affect the build. For example, you could use:
#
#      make CXXFLAGS=-g
#
# to build with debug information. The full list of variables
# that can be used by this makefile is:
# AR, CC, CFLAGS, CPPFLAGS, CXX, CXXFLAGS, LD, LDFLAGS, MAKE, RANLIB.

# You may also specify config=Debug|Release
# or their corresponding lower case variants on make command line to select
# the corresponding default flags values.
ifeq ($(config),debug)
override config := Debug
endif
ifeq ($(config),release)
override config := Release
endif
ifeq ($(config),Debug)
override CPPFLAGS += -DDEBUG
override CFLAGS += -g -O0
override CXXFLAGS += -g -O0
override LDFLAGS += -g
else ifeq ($(config),Release)
override CPPFLAGS += -DNDEBUG
override CFLAGS += -O2
override CXXFLAGS += -O2
else ifneq (,$(config))
$(warning Unknown configuration "$(config)")
endif
#
# Additionally, this makefile is customizable with the following
# settings:
#
#      BOOST_ROOT                     Path to the Boost installation
#      ISHIKO_CPP_ERRORS_ROOT         Path to the Ishiko Errors installation
#      ISHIKO_CPP_PROCESS_ROOT        Path to the Ishiko Process installation
#      ISHIKO_CPP_TESTFRAMEWORK_ROOT  Path to the Ishiko TestFramework installation
#      PUGIXML_ROOT                   Path to the pugixml installation
#      LIBGIT2_ROOT                   Path to the libgit2 installation
#      ISHIKO_CPP_COLLECTIONS_ROOT    Path to the Ishiko Collections installation
#      ISHIKO_CPP_TASKS_ROOT          Path to the Ishiko/Tasks installation
#      DIPLODOCUSDB_CORE_ROOT         Path to the DiplodocusDB installation
#      DIPLODOCUSDB_TREEDB_ROOT       Path to the DiplodocusDB installation
#      CODESMITHY_ROOT                Path to the CodeSmithy installation

# Use "make RANLIB=''" for platforms without ranlib.
RANLIB ?= ranlib

CC := cc
CXX := c++

# The directory for the build files, may be overridden on make command line.
builddir = .

ifneq ($(builddir),.)
_builddir := $(if $(findstring $(abspath $(builddir)),$(builddir)),,../../)$(builddir)/../GNUmakefile/
_builddir_error := $(shell mkdir -p $(_builddir) 2>&1)
$(if $(_builddir_error),$(error Failed to create build directory: $(_builddir_error)))
endif

# ------------
# Configurable settings:
# 

# Path to the Boost installation
BOOST_ROOT ?= $(BOOST)
# Path to the Ishiko Errors installation
ISHIKO_CPP_ERRORS_ROOT ?= $(ISHIKO_CPP)/Errors
# Path to the Ishiko Process installation
ISHIKO_CPP_PROCESS_ROOT ?= $(ISHIKO_CPP)/Process
# Path to the Ishiko TestFramework installation
ISHIKO_CPP_TESTFRAMEWORK_ROOT ?= $(ISHIKO_CPP)/TestFramework
# Path to the pugixml installation
PUGIXML_ROOT ?= $(PUGIXML)
# Path to the libgit2 installation
LIBGIT2_ROOT ?= $(LIBGIT2)
# Path to the Ishiko Collections installation
ISHIKO_CPP_COLLECTIONS_ROOT ?= $(ISHIKO_CPP)/Collections
# Path to the Ishiko/Tasks installation
ISHIKO_CPP_TASKS_ROOT ?= $(ISHIKO_CPP)/Tasks
# Path to the DiplodocusDB installation
DIPLODOCUSDB_CORE_ROOT ?= $(DIPLODOCUSDB)/Core
# Path to the DiplodocusDB installation
DIPLODOCUSDB_TREEDB_ROOT ?= $(DIPLODOCUSDB)/TreeDB
# Path to the CodeSmithy installation
CODESMITHY_ROOT ?= $(CODESMITHYIDE)/CodeSmithy

# ------------

all: $(_builddir)CodeSmithyCoreTests

$(_builddir)CodeSmithyCoreTests: $(_builddir)CodeSmithyCoreTests_main.o $(_builddir)CodeSmithyCoreTests_DocumentsTestSequence.o $(_builddir)CodeSmithyCoreTests_DocumentsTests.o $(_builddir)CodeSmithyCoreTests_DocumentsObserverTests.o $(_builddir)CodeSmithyCoreTests_DocumentTypesTests.o $(_builddir)CodeSmithyCoreTests_BakefileTypeTests.o $(_builddir)CodeSmithyCoreTests_BakefileTests.o $(_builddir)CodeSmithyCoreTests_CMakeListsTypeTests.o $(_builddir)CodeSmithyCoreTests_CMakeListsTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectFileTypeTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectFileTests.o $(_builddir)CodeSmithyCoreTests_CppFileTypeTests.o $(_builddir)CodeSmithyCoreTests_CppFileTests.o $(_builddir)CodeSmithyCoreTests_XMLDocumentTypeTests.o $(_builddir)CodeSmithyCoreTests_XMLDocumentTests.o $(_builddir)CodeSmithyCoreTests_ProjectTests.o $(_builddir)CodeSmithyCoreTests_ProjectGroupTypeTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectTypeTests.o $(_builddir)CodeSmithyCoreTests_BakefileProjectTypeTests.o $(_builddir)CodeSmithyCoreTests_CMakeProjectTypeTests.o $(_builddir)CodeSmithyCoreTests_ProjectTypesTests.o $(_builddir)CodeSmithyCoreTests_ProjectRepositoryTests.o $(_builddir)CodeSmithyCoreTests_ProjectDescriptionTests.o $(_builddir)CodeSmithyCoreTests_ProjectLocationTests.o $(_builddir)CodeSmithyCoreTests_ProjectGroupTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectTests.o $(_builddir)CodeSmithyCoreTests_BakefileProjectTests.o $(_builddir)CodeSmithyCoreTests_ProjectTemplatesTests.o $(_builddir)CodeSmithyCoreTests_WorkspacesTestSequence.o $(_builddir)CodeSmithyCoreTests_WorkspaceFileRepositoryTests.o $(_builddir)CodeSmithyCoreTests_GenericWorkspaceTests.o $(_builddir)CodeSmithyCoreTests_EngineTests.o $(_builddir)CodeSmithyCoreTests_BootstrapTests.o
	$(CXX) -o $@ $(LDFLAGS) $(_builddir)CodeSmithyCoreTests_main.o $(_builddir)CodeSmithyCoreTests_DocumentsTestSequence.o $(_builddir)CodeSmithyCoreTests_DocumentsTests.o $(_builddir)CodeSmithyCoreTests_DocumentsObserverTests.o $(_builddir)CodeSmithyCoreTests_DocumentTypesTests.o $(_builddir)CodeSmithyCoreTests_BakefileTypeTests.o $(_builddir)CodeSmithyCoreTests_BakefileTests.o $(_builddir)CodeSmithyCoreTests_CMakeListsTypeTests.o $(_builddir)CodeSmithyCoreTests_CMakeListsTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectFileTypeTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectFileTests.o $(_builddir)CodeSmithyCoreTests_CppFileTypeTests.o $(_builddir)CodeSmithyCoreTests_CppFileTests.o $(_builddir)CodeSmithyCoreTests_XMLDocumentTypeTests.o $(_builddir)CodeSmithyCoreTests_XMLDocumentTests.o $(_builddir)CodeSmithyCoreTests_ProjectTests.o $(_builddir)CodeSmithyCoreTests_ProjectGroupTypeTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectTypeTests.o $(_builddir)CodeSmithyCoreTests_BakefileProjectTypeTests.o $(_builddir)CodeSmithyCoreTests_CMakeProjectTypeTests.o $(_builddir)CodeSmithyCoreTests_ProjectTypesTests.o $(_builddir)CodeSmithyCoreTests_ProjectRepositoryTests.o $(_builddir)CodeSmithyCoreTests_ProjectDescriptionTests.o $(_builddir)CodeSmithyCoreTests_ProjectLocationTests.o $(_builddir)CodeSmithyCoreTests_ProjectGroupTests.o $(_builddir)CodeSmithyCoreTests_CodeSmithyProjectTests.o $(_builddir)CodeSmithyCoreTests_BakefileProjectTests.o $(_builddir)CodeSmithyCoreTests_ProjectTemplatesTests.o $(_builddir)CodeSmithyCoreTests_WorkspacesTestSequence.o $(_builddir)CodeSmithyCoreTests_WorkspaceFileRepositoryTests.o $(_builddir)CodeSmithyCoreTests_GenericWorkspaceTests.o $(_builddir)CodeSmithyCoreTests_EngineTests.o $(_builddir)CodeSmithyCoreTests_BootstrapTests.o -L$(LIBGIT2_ROOT)/lib -L$(DIPLODOCUSDB_CORE_ROOT)/Lib -L$(DIPLODOCUSDB_TREEDB_ROOT)/Lib -L$(ISHIKO_CPP_ERRORS_ROOT)/Lib -L$(BOOST_ROOT)/lib -L$(ISHIKO_CPP_COLLECTIONS_ROOT)/Lib -L$(ISHIKO_CPP_TASKS_ROOT)/Lib -L$(CODESMITHY_ROOT)/Lib -L$(ISHIKO_CPP_PROCESS_ROOT)/Lib -L$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Lib -lCodeSmithyCore -lDiplodocusXMLTreeDB -lDiplodocusTreeDBCore -lDiplodocusDBCore -lIshikoTasks -lIshikoTestFrameworkCore -lIshikoProcess -lIshikoErrors -lboost_filesystem -lboost_system -pthread

$(_builddir)CodeSmithyCoreTests_main.o: ../../Source/main.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/main.cpp

$(_builddir)CodeSmithyCoreTests_DocumentsTestSequence.o: ../../Source/DocumentsTests/DocumentsTestSequence.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/DocumentsTestSequence.cpp

$(_builddir)CodeSmithyCoreTests_DocumentsTests.o: ../../Source/DocumentsTests/DocumentsTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/DocumentsTests.cpp

$(_builddir)CodeSmithyCoreTests_DocumentsObserverTests.o: ../../Source/DocumentsTests/DocumentsObserverTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/DocumentsObserverTests.cpp

$(_builddir)CodeSmithyCoreTests_DocumentTypesTests.o: ../../Source/DocumentsTests/DocumentTypesTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/DocumentTypesTests.cpp

$(_builddir)CodeSmithyCoreTests_BakefileTypeTests.o: ../../Source/DocumentsTests/BakefileTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/BakefileTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_BakefileTests.o: ../../Source/DocumentsTests/BakefileTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/BakefileTests.cpp

$(_builddir)CodeSmithyCoreTests_CMakeListsTypeTests.o: ../../Source/DocumentsTests/CMakeListsTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/CMakeListsTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_CMakeListsTests.o: ../../Source/DocumentsTests/CMakeListsTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/CMakeListsTests.cpp

$(_builddir)CodeSmithyCoreTests_CodeSmithyProjectFileTypeTests.o: ../../Source/DocumentsTests/CodeSmithyProjectFileTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/CodeSmithyProjectFileTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_CodeSmithyProjectFileTests.o: ../../Source/DocumentsTests/CodeSmithyProjectFileTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/CodeSmithyProjectFileTests.cpp

$(_builddir)CodeSmithyCoreTests_CppFileTypeTests.o: ../../Source/DocumentsTests/CppFileTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/CppFileTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_CppFileTests.o: ../../Source/DocumentsTests/CppFileTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/CppFileTests.cpp

$(_builddir)CodeSmithyCoreTests_XMLDocumentTypeTests.o: ../../Source/DocumentsTests/XMLDocumentTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/XMLDocumentTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_XMLDocumentTests.o: ../../Source/DocumentsTests/XMLDocumentTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/DocumentsTests/XMLDocumentTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectTests.o: ../../Source/ProjectTests/ProjectTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectGroupTypeTests.o: ../../Source/ProjectTests/ProjectGroupTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectGroupTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_CodeSmithyProjectTypeTests.o: ../../Source/ProjectTests/CodeSmithyProjectTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/CodeSmithyProjectTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_BakefileProjectTypeTests.o: ../../Source/ProjectTests/BakefileProjectTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/BakefileProjectTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_CMakeProjectTypeTests.o: ../../Source/ProjectTests/CMakeProjectTypeTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/CMakeProjectTypeTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectTypesTests.o: ../../Source/ProjectTests/ProjectTypesTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectTypesTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectRepositoryTests.o: ../../Source/ProjectTests/ProjectRepositoryTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectRepositoryTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectDescriptionTests.o: ../../Source/ProjectTests/ProjectDescriptionTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectDescriptionTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectLocationTests.o: ../../Source/ProjectTests/ProjectLocationTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectLocationTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectGroupTests.o: ../../Source/ProjectTests/ProjectGroupTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/ProjectGroupTests.cpp

$(_builddir)CodeSmithyCoreTests_CodeSmithyProjectTests.o: ../../Source/ProjectTests/CodeSmithyProjectTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/CodeSmithyProjectTests.cpp

$(_builddir)CodeSmithyCoreTests_BakefileProjectTests.o: ../../Source/ProjectTests/BakefileProjectTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTests/BakefileProjectTests.cpp

$(_builddir)CodeSmithyCoreTests_ProjectTemplatesTests.o: ../../Source/ProjectTemplatesTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/ProjectTemplatesTests.cpp

$(_builddir)CodeSmithyCoreTests_WorkspacesTestSequence.o: ../../Source/WorkspacesTests/WorkspacesTestSequence.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/WorkspacesTests/WorkspacesTestSequence.cpp

$(_builddir)CodeSmithyCoreTests_WorkspaceFileRepositoryTests.o: ../../Source/WorkspacesTests/WorkspaceFileRepositoryTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/WorkspacesTests/WorkspaceFileRepositoryTests.cpp

$(_builddir)CodeSmithyCoreTests_GenericWorkspaceTests.o: ../../Source/WorkspacesTests/GenericWorkspaceTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/WorkspacesTests/GenericWorkspaceTests.cpp

$(_builddir)CodeSmithyCoreTests_EngineTests.o: ../../Source/EngineTests/EngineTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/EngineTests/EngineTests.cpp

$(_builddir)CodeSmithyCoreTests_BootstrapTests.o: ../../Source/BootstrapTests/BootstrapTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -DPUGIXML_HEADER_ONLY -I$(LIBGIT2_ROOT)/include -I$(DIPLODOCUSDB_CORE_ROOT)/Include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_ERRORS_ROOT)/Include -I$(BOOST_ROOT)/include -I$(DIPLODOCUSDB_TREEDB_ROOT)/Include -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/Include -I$(ISHIKO_CPP_TASKS_ROOT)/Include -I$(PUGIXML_ROOT)/src -I$(CODESMITHY_ROOT)/Include -I$(ISHIKO_CPP_PROCESS_ROOT)/Include -I$(ISHIKO_CPP_TESTFRAMEWORK_ROOT)/Include -std=c++11 ../../Source/BootstrapTests/BootstrapTests.cpp

clean:
	rm -f $(_builddir)*.o
	rm -f $(_builddir)*.d
	rm -f $(_builddir)CodeSmithyCoreTests

.PHONY: all clean

# Dependencies tracking:
-include $(_builddir)*.d
