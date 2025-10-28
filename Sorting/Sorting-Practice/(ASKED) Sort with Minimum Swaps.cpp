// Companies asked: 
// Microsoft

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int minSwaps(vector<int>& arr) {
            int min_swaps = 0;
            for(int i = 0; i < arr.size(); i++){
                int min = i;
                for(int j = i; j < arr.size(); j++){
                    if(arr[j] < arr[min]) min = j;
                }
                if(arr[min] < arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[min];
                    arr[min] = temp;
                    min_swaps += 1;
                }
            }
            return min_swaps;
    }
};
