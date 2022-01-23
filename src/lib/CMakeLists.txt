project(cpp-practice-lib)

set(HEADER_FILES
        cpp-practice.h
        baseball-game/baseball-game.h
        top-key/top-key.h)

set(SOURCE_FILES
        monotonic-array.cpp
        factorial.cpp
        bracket-matcher.cpp
        baseball-game/baseball-game.cpp
        top-key/top-key.cpp)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES} ${HEADER_FILES})