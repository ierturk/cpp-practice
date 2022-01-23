//
// Created by Ibrahim ERTURK on 23.01.2022.
//

#ifndef CPP_PRACTICE_BASEBALL_GAME_H
#define CPP_PRACTICE_BASEBALL_GAME_H

#include <string>
#include <vector>

class BaseballGame {
public:
    BaseballGame();
    ~BaseballGame();

    int calPoints(const std::vector<std::string>& ops);
};


#endif //CPP_PRACTICE_BASEBALL_GAME_H
