// Companies
// Facebook
// Google
// Uber
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
    int removeSpecificElement(vector<int>& arr, int target) {
        int pointer = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != target){
                swap(arr[pointer], arr[i]);
                pointer++;
            }
        }
        // arr.erase(remove(arr.begin(), arr.end(), target), arr.end());
        return pointer;
    }
};
