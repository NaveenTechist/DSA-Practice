// Companies
// Google
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool isSorted(int arr[],int n){
        for(int i = 1; i < n; i++){
            if(arr[i-1] > arr[i]) return false;
        }
        return true;
    }
};
