//
// Created by Ibrahim ERTURK on 24.01.2022.
//

#include <unordered_map>
#include "top-key.h"

using namespace std;

vector<int> TopK::topKFrequent(std::vector<int> &nums, int k){
    vector<int> top(k+1);
    int n = nums.size();
    // sort(nums.begin(), nums.end(), less<int>());

    // array to keep track of frequency
    unordered_map<int, int> freq;

    // iterate till the end of stream
    for (int m = 0; m < n; m++) {
        // increase the frequency
        freq[nums[m]]++;

        // store that element in top vector
        top[k] = nums[m];

        // search in top vector for same element
        auto it = find(top.begin(), top.end() - 1, nums[m]);

        // iterate from the position of element to zero
        for (int i = distance(top.begin(), it) - 1; i >= 0; --i) {
            // compare the frequency and swap if higher
            // frequency element is stored next to it
            if (freq[top[i]] < freq[top[i + 1]])
                swap(top[i], top[i + 1]);

                // if frequency is same compare the elements
                // and swap if next element is high
             else if ((freq[top[i]] == freq[top[i + 1]]) && (top[i] > top[i + 1]))
                swap(top[i], top[i + 1]);
            else
                break;
        }
    }

    if(top.size() > 1)
        top.pop_back();
    sort(top.begin(), top.end(), less<int>());
    return top;
}