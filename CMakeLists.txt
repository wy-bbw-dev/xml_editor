# CMakeList.txt : CMake project for xml_editor, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.24)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("xml_editor")

find_package(Qt6 REQUIRED COMPONENTS Core Quick Widgets)

qt_standard_project_setup()
qt_add_executable(xml_editor)

qt_add_qml_module(
	xml_editor
	URI "xmleditor"
	VERSION "1.0"
	QML_FILES 
		src/qml/mainwindow.qml
)

target_sources(xml_editor PRIVATE
	src/main.cpp
	src/qml/mainwindow.qml
)

set_target_properties(xml_editor PROPERTIES 
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
	CXX_EXTENSIONS OFF
)

target_compile_options(
	xml_editor PRIVATE
	$<$<CXX_COMPILER_ID:MSVC>:/permissive->
)

target_link_libraries(xml_editor PRIVATE
	Qt6::Core
	Qt6::Quick
	Qt6::Widgets
)
enable_testing()