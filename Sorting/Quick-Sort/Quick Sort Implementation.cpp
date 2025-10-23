// 15+ companies asked recent interviews
// Facebook
// Google
// Uber
// Oracle
// Adobe
// Bloomberg
// Amazon
// Microsoft
// Yahoo
// Apple


#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int get_mid_index(int arr[], int low, int high){
        int i = low;
        int j = high;
        while(i < j){
            while(arr[i] <= arr[low] && i <= high-1) i++;
            while(arr[j] > arr[low] && j >= 1 ) j--;
            if(i<j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        return j;
    }
    
    void quickSorting(int arr[], int low, int high){
        if(low < high){
            int mid_index = get_mid_index(arr, low, high); 
            quickSorting(arr,low, mid_index-1);
            quickSorting(arr,mid_index+1, high);
        } 
    }
    
    void quickSort(int arr[], int n){
         quickSorting(arr, 0, n-1);
    }
};
