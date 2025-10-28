// Companies
// SAP

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        int max = arr[0];
        int second_large = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                second_large = max;
                max = arr[i];
            } 
            if(arr[i] > second_large && arr[i] < max) second_large = arr[i];
        }
        return second_large;
    }
};
