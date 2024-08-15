#==========================================================================
cmake_minimum_required(VERSION 3.11)
project(
    tse
    LANGUAGES CXX 
    VERSION 1.0.0
)
#==========================================================================

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(
    ftxui
    GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui.git
    GIT_TAG        v5.0.0  # specify the desired version of ftxui
)
FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
    FetchContent_Populate(ftxui)
    add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

#==========================================================================

set(
    SOURCE 
    src/main.cpp
)


include_directories(include/ui)
add_subdirectory(include/ui)


#==========================================================================
add_executable(
    ${PROJECT_NAME}
    ${SOURCE}
)
#==========================================================================
# add libs if it exists
target_link_libraries(
    ${PROJECT_NAME} 
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
    ui

)


