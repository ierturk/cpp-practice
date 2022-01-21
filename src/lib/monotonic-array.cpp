//
// Created by Ibrahim ERTURK on 21.01.2022.
//

// #include <iostream>
#include <vector>

#include "cpp-practice.h"

bool isMonotonic(std::vector<int>& arr) {
    int tmp = arr[0];
    int dir = 0;
    for(int i=1; i<arr.size();i++) {

        int new_dir;
        if(arr[i] - tmp > 0)
            new_dir = 1;
        else if(arr[i] - tmp == 0)
            new_dir = 0;
        else
            new_dir = -1;

        if(new_dir != 0) {
            if(dir == 0) dir = new_dir;
            if(new_dir != dir) {
                return false;
            }

        }

        tmp = arr[i];
    }
    return true;
}