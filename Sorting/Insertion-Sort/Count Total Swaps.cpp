#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSwaps(int arr[], int n){
        int swap_counts = 0;
        for(int i = 1; i <= n-1; i++){
            int j = i;
            while(arr[j-1] > arr[j] && j >= 1){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swap_counts += 1;
                j--;
            }
        }
        return swap_counts;
    }
};
