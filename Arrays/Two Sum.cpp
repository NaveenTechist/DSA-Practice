#include <bits/stdc++.h>
using namespace std;

class solution {
   public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> add_indices;
        for(int i = 0; i < arr.size(); i++){
            bool is_true = false;
            for(int j = 0; j < arr.size(); j++){
                if(arr[i] + arr[j] == k){
                    add_indices.push_back(i);
                    add_indices.push_back(j);
                    is_true = true;
                    break;
                }
            }
            if(is_true) break;
        }
        return add_indices;
    }
};
