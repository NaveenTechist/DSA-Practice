// Companies
// Amazon

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int longestSubarrayWithSumK(int arr[], int n, int k){
        map<int, int> m;
        int sum = 0, max = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == k) max = i+1;
            if(m.find(sum-k) != m.end()) max = i - m[sum-k] > max ? i - m[sum-k] : max;
            if(m.find(sum) == m.end()) m[sum] = i;
        }
        return max;
    }
};
