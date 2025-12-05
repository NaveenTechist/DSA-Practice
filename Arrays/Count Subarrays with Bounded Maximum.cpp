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

        //  int i =0, j =0;
        // int count = 0, preCount = 0;
        // while(j < arr.size())
        // {
        //     if(arr[j] > maxBound)
        //     {
        //         preCount = 0;
        //         i = j + 1;
        //     }else if (minBound <= arr[j] && arr[j] <= maxBound) 
        //     {
        //         preCount = j - i + 1;
        //     }
        //     count += preCount;
        //     j++;
        // }
        // return count;
    }
};
