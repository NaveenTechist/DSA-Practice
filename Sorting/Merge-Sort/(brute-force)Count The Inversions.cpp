#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long countInversions(int arr[], int n) {
        int count = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]) count++;
            }
        }
        return count;
    }
};
