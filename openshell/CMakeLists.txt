# CMakeList.txt : CMake project for openshell, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (openshell "main.cpp" "openshell.h"  "opensh_headers/analyzer.h"    "opensh_headers/prompt_rec.h" "opensh_headers/programs_include.h" "text_edit.cpp" "opensh_headers/is64bit.h" "opensh_headers/all_commands.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET openshell PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
