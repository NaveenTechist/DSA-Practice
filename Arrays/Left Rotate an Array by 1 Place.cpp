#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void leftRotate(int arr[], int n){
        int first_element = arr[0];
        for(int i = 0; i < n; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = first_element;
    }
};
