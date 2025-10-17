// Companies
// Oracle
// PayTM
// Snapdeal
// Amazon
// Qualcomm
// Microsoft
// 10+ companies asked recently
#include <bits/stdc++.h>
using namespace std;

class solution{
    
    void merge(int arr[], int left, int mid, int right){
        int i  = left;
        int j = mid + 1;
        int k = 0;
        int n = right - left + 1;
        int new_array[n];
        while(i <= mid and j <= right){
            if(arr[i] > arr[j]){
                new_array[k] = arr[j];
                k++;
                j++;
            }else{
                new_array[k] = arr[i];
                i++;
                k++;
            }
        }
        while(i<= mid){
            new_array[k] = arr[i];
                k++;
                i++;
        }
        while(j <= right){
             new_array[k] = arr[j];
                j++;
                k++;
        }
        for(int i = 0; i <= n-1; i++){
           arr[left+i] = new_array[i]; 
        }
    }
    
    void merge_function(int arr[], int left, int right){
        if(left == right) return;
        int mid = (left + right) / 2;
        merge_function(arr, left, mid);
        merge_function(arr, mid+1, right);
        
        merge(arr, left, mid, right);
    }
    
    public:
    void mergeSort(int arr[], int n){
        merge_function(arr, 0, n-1);
    }
};
