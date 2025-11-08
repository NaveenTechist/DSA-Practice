#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void leftRotate(int arr[], int n, int k){
         k = k % n; 
        //  if(k == 0) return; 
        // vector<int> store_ints;
        // for(int i = 0; i < k; i++){
        //     store_ints.push_back(arr[i]);
        // }
        // for(int i = k; i <n; i++){
        //     arr[i-k] = arr[i];
        // }
        // for(int i = n-k; i < n; i++){
        //     arr[i] = store_ints[i-(n-k)];
        // }
        reverse(arr, arr+k);
        reverse(arr+k, arr+n);
        reverse(arr, arr+n);
    }
};
