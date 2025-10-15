// Companies
// Amazon
// Google
// Microsoft
// Bloomberg


#include <bits/stdc++.h>
using namespace std;

class solution{
public:
  void insertionSort(int arr[], int n){
    for(int i = 1; i <= n-1; i++){
        int j = i;
        while(arr[j-1] < arr[j] &&  j >= 1){
            int temp_var = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp_var;
            j--;
        }
    }
  }
};
