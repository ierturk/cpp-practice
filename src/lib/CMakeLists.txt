project(cpp-practice-lib)

set(HEADER_FILES
    cpp-practice.h
)

set(SOURCE_FILES
        monotonic-array.cpp
        factorial.cpp
        bracket-matcher.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES} ${HEADER_FILES})