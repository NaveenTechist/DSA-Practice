// Companies
// Oracle

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int largestElement(int arr[], int n){
        int large_num = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] > large_num) large_num = arr[i];
        }
        return large_num;
    }
};
