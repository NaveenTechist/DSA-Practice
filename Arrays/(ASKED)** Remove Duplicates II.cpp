// Companies
// Zoho
// Facebook
// Google
// Accolite
// Yandex
// Adobe
// Bloomberg
// Microsoft
// Yahoo
// Apple
// Amazon

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeDup(vector<int>& arr) {
        int count = 0;
        int i = 0;
        for(int j = 1; j < arr.size(); j++){
            if(arr[i] == arr[j] && count < 1){
                arr[i+1] = arr[j];
                i++;
                count++;
            }
            if(arr[i] != arr[j]) count = 1;
            if(count >= 1 && arr[i] != arr[j]){
                arr[i+1] = arr[j];
                count = 0;
                i++;
            }
        }
        return i+1;
    }
};
