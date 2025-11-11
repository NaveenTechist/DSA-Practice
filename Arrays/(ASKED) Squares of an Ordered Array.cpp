// Companies
// Adobe
// Bloomberg
// Microsoft
// Yahoo
// Paypal
// Facebook
// Google
// Uber
// Oracle
// Yandex
// Walmart Labs
// Apple
// Amazon

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> getSortedSquares(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            arr[i] = abs(arr[i]) * abs(arr[i]);
        }
        int min = 0;
         for(int i = 0; i < arr.size(); i++){
              min = i;
           for(int j = i; j < arr.size(); j++) if(arr[j] < arr[min]) min = j;
            swap(arr[min], arr[i]);
        }
        return arr;
    }
};
