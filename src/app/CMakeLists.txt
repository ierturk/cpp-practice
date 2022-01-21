project(cpp-practice-app)

set(SOURCE_FILES
        # monotonic-array.cpp
        main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} cpp-practice-lib)