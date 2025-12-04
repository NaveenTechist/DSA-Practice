#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int countSubarraysWithBoundedMax(vector<int>& arr, int minBound, int maxBound) {
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            vector<int> checking_arr;
            for(int j = i; j < arr.size(); j++){
                checking_arr.push_back(arr[j]);
                int max_ele = *max_element(checking_arr.begin(), checking_arr.end());
                if(max_ele >= minBound && max_ele <= maxBound) count++; 
                else if(max_ele != 0 && max_ele >= minBound) break;
            }
        }
        return count;
    }
};
