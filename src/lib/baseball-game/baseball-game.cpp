//
// Created by Ibrahim ERTURK on 23.01.2022.
//

#include "baseball-game.h"

BaseballGame::BaseballGame(){};
BaseballGame::~BaseballGame(){};

int BaseballGame::calPoints(const std::vector<std::string>& ops) {
    std::vector<int> arr;
    for(auto s : ops) {
        if(s != "C" && s != "D" && s != "+") {
            arr.push_back(std::stoi(s));
        } else if(s == "C") {
            arr.pop_back();
        } else if(s == "D") {
            arr.push_back(2*arr[arr.size()-1]);
        } else if(s == "+") {
            arr.push_back(arr[arr.size()-1] + arr[arr.size()-2]);
        }
    }
    int sum = 0;
    for(auto i : arr) {
        sum += i;
    }
    return sum;
}
