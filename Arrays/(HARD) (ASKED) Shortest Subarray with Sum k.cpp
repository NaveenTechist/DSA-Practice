// Companies
// Zoho
// Adobe
// Bloomberg
// Microsoft
// Yahoo
// ByteDance
// Paypal
// Tesla
// Flipkart
// Facebook
// Google
// Uber
// Goldman Sachs
// Oracle
// Yandex
// IBM
// Nvidia
// Walmart Labs
// Apple
// Amazon

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int shortestSubarrayWithSumK(int arr[], int n, int k) {
        map<int, int> m;
        int sum = 0, min_len = INT_MAX;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == k) min_len = min(min_len, i+1);
            if(m.find(sum - k) != m.end()) min_len = min(min_len, i - m[sum-k]);
            if(m.find(sum) == m.end()) m[sum] = i;
        }
        return min_len == INT_MAX ? -1 : min_len;
        
        // int min_len = INT_MAX;
        // for(int i = 0; i < n; i++){
        //     if(arr[i] == k) return 1;
        //     int sum = 0;
        //     for(int j = i; j < n; j++){
        //         sum += arr[j];
        //         if(sum == k) {
        //             min_len = min(min_len, j - i+1);
        //             break;
        //         }
        //     }
        // }
        // return min_len == INT_MAX ? -1 : min_len;
    }
};



