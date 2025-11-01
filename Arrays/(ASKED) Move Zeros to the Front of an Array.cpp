// Companies
// Apple
// Amazon
// Google
// Microsoft
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToFront(int arr[], int n){
        vector<int> nums;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                nums.push_back(arr[i]);
            }
        }
        int j = 0;
        for(int i = 0; i < n; i++){
            if(i >= n - nums.size()){
                arr[i] = nums[j];
                j++;
            }else{
                arr[i] = 0;
            }
        }
    }
};
