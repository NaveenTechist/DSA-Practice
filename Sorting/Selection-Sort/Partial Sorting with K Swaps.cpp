#include <bits/stdc++.h>
using namespace std;

class solution {
public:    
    void rearrangeArray(vector<int>& arr, int k) {
        for(int i = 0; i < k; i++){
            int min_index = i;
            for(int j = i; j <= arr.size()-1; j++){
                if(arr[j] < arr[min_index]) min_index = j;
            }
            int temp_var = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp_var;
        }
    }
};
