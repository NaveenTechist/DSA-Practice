// Asked in Companies
// Amazon
// Google
// Microsoft
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bubbleSort(int arr[], int n){
        for(int i = n-1; i >= 1; i--){
            bool is_true = true;
            for(int j = 0; j <= i -1; j++){
                if(arr[j] < arr[j+1]){
                    int temp_var = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp_var;
                    is_true = false;
                }
            }
            if(is_true) break;
        }
    }
};
