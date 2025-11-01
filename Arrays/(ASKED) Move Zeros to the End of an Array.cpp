// Companies
// Apple
// Amazon
// Google
// Microsoft
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToEnd(int arr[],int n){
        int pointer = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                swap(arr[pointer], arr[i]);
                pointer++;
            }
        }
    }
};
