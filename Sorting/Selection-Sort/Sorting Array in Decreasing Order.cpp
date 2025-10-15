// Asked in hiring interview by 8+ companies recently
#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void selectionSort(int arr[], int n){
        for(int i = 0; i <n-1; i++){
            int max_index = i;
            for(int j = i; j <= n-1; j++){
                if(arr[j] > arr[max_index]) max_index = j;
            }
            int temp_var = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp_var;
        }
    }
};
