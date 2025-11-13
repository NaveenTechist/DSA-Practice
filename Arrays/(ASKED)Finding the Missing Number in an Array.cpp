// Companies
// Apple
// Amazon
// Google
// Microsoft
// Adobe
// Nvidia
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int missingNumber(int arr[], int n){
        for(int i = 1; i <= n; i++){
            bool is_it = true;
            for(int j = 0; j < n; j++){
                if(i == arr[j]){
                    is_it = false;
                    break;
                }
            }
            if(is_it) return i;
        }
    }
};
