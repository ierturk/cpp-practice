project(test-doctest)

include(FetchContent)
FetchContent_Declare(
        Doctest
        GIT_REPOSITORY https://github.com/doctest/doctest.git
        GIT_TAG        v2.4.8
)
FetchContent_MakeAvailable(Doctest)

set(SOURCE_FILES
        main.cpp
        )

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} cpp-practice-lib doctest)