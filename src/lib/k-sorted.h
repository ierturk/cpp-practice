//
// Created by Ibrahim ERTURK on 25.01.2022.
//

#ifndef K_SORTED_H
#define K_SORTED_H
#include <string>
#include <vector>

class KSorted {
public:
    std::string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        std::vector <int> res(arr, arr+n);
        sort(res.begin(), res.end());
        for(int i=0; i<n; i++){
            int idx = lower_bound(res.begin(), res.end(), arr[i])-res.begin();
            if(abs(idx-i)>k)
                return "No";
        }
        return "Yes";
    }
};
#endif //K_SORTED_H
