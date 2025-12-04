// Companies
// Amazon

#include <bits/stdc++.h>
using namespace std;

class solution{
public:

                // O(n) Full optimal solution


    int longestSubarrayWithSumK(int arr[], int n, int k){         
        int i = 0, j = 0, sum = 0, max  =0;
        while(j < n){
            sum += arr[j];
            if(sum == k) {
                int len = (j+1) - i;
                max = len > max ? len : max;
            }
            if(sum > k){
                sum -= arr[i];
                i++;
            }
            j++;
        }
        return max;

                // Better solution O(nlogn)
        
        // map<int, int> m;  
        // int sum = 0, max = 0;
        // for(int i = 0; i < n; i++){
        //     sum += arr[i];
        //     if(sum == k) max = i+1;
        //     if(m.find(sum-k) != m.end()) max = i - m[sum-k] > max ? i - m[sum-k] : max;
        //     if(m.find(sum) == m.end()) m[sum] = i;
        // }
        // return max;


                    // BRUTEFORE SOLUTION O(n²) 

        //  int large_sub_arr = 0;
        // for(int i = 0; i < n-1; i++){
        //     int length_of_array = 0;
        //     int sum_var = 0;
        //     for(int j = i; j < n; j++){
        //        sum_var += arr[j];
        //        length_of_array++;
        //        if(sum_var == k) if(large_sub_arr < length_of_array) large_sub_arr = length_of_array;
        //     }
        // }
        // return large_sub_arr;
    }
};
