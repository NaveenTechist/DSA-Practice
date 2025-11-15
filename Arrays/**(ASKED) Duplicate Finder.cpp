// Companies
// Zoho
// Facebook
// Google
// Uber
// Oracle
// Goldman Sachs
// Citadel
// Adobe
// Bloomberg
// Nvidia
// Microsoft
// Yahoo
// Apple
// Amazon

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pointer = 0;
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[pointer] == nums[i]) return nums[i];
            pointer++;
        }
    //    int n = nums.size()-1;
    //     int sum_n = n * (n+1)/2;
    //     int array_sum = 0;
    //     for(int num : nums){
    //         array_sum += num;
    //     }
    //     return array_sum - sum_n;
    // }
      //ANOTHER
       // unordered_map<int, int> countMap;
       //  for(int i=0; i < nums.size();i++){
            
       //          if(countMap[nums[i]]++){
       //              return nums[i];
       //          }
       //  }
    }
};
