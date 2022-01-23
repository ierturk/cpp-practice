project(test-catch2)

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v2.13.8
)
FetchContent_MakeAvailable(Catch2)

set(SOURCE_FILES
        main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} cpp-practice-lib Catch2::Catch2)