// Companies
// Airbnb
// Amazon
// Google
// Microsoft
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int findSingleElement(int arr[], int n){
        int count = 0;
        for(int i = 0; i < n; i++){
            count = 0;
            for(int j = 0; j < n; j++){
                if(arr[i] == arr[j]) count ++;
            }
            if(count == 1) return arr[i];
        }
    }
};
