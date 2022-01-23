project(cpp-practice-lib)

set(HEADER_FILES
    cpp-practice.h
    baseball-game/baseball-game.h
)

set(SOURCE_FILES
        monotonic-array.cpp
        factorial.cpp
        bracket-matcher.cpp
        baseball-game/baseball-game.cpp
        )

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES} ${HEADER_FILES})