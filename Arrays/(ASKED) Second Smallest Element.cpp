// Companies
// Google
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondSmallestElement(int arr[], int n){
        int small = arr[0];
        int second_small = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < small){
                second_small = small;
                small = arr[i];
            }
            else if(arr[i] < second_small && arr[i] != small) second_small = arr[i];
        }
        return second_small;
    }
};
