//
// Created by Ibrahim ERTURK on 31.01.2022.
//

#include <iostream>
#include <string>

using namespace std;

bool letter_pyramid(string in_str) {

    const size_t sz{in_str.size()};
    for(size_t i = 0; i < sz; ++i) {
        string out_spc (sz-i-1, ' ');

        string fw_str {in_str.substr(0,i+1)};
        string rev_str {fw_str.substr(0,i)};
        reverse(rev_str.begin(), rev_str.end());

        cout << out_spc << fw_str << rev_str << out_spc << endl;
    }

    return true;
}
