// Companies
// Amazon

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int longestSubarrayWithSumK(int arr[], int n, int k){
        int large_sub_arr = 0;
        int all_same_ele = 0;
        for(int i = 0; i < n-1; i++){
            int length_of_array = 0;
            int sum_var = 0;
            for(int j = i+1; j < n; j++){
                if(arr[i] == arr[j] && arr[i] == arr[j+1]){
                    all_same_ele++;
                }else if(arr[i] + arr[j] == k){
                    if(large_sub_arr < 2){
                        large_sub_arr = 2;
                    } 
                    break;
                }else{
                    length_of_array++;
                    sum_var += arr[j];
                    if(sum_var + arr[i] == k){
                        if(large_sub_arr < length_of_array+1){
                            large_sub_arr = length_of_array +1;
                        }
                        break;
                    }
                }
            }
            if(all_same_ele == n) return n;
        }
        return large_sub_arr > 0 ? large_sub_arr : 0;
    }
};
