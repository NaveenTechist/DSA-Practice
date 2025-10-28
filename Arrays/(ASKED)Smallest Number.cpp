// Companies
// Amazon

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int smallestElement(int arr[], int n){
        int min_element = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i] < min_element) min_element = arr[i];
        }
        return min_element;
    }
};
