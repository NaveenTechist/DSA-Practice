#include<bits/stdc++.h>
using namespace std;
 
 
 void selction_sort(int arr[], int size){
     for(int i = 0; i < size-2; i++){
         int min = i;
         for(int j = i; j < size; j++){
             if(arr[j] < arr[min]) min = j;
         }
         int temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
     }
 }
 
  void bubble_sort(int arr[], int size){
      for(int i = size-1; i >= 0 ; i--){
          bool it_it = true;
          for(int j = 0; j <= i; j++){
              if(arr[j] > arr[j+1]){
                 int temp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp;
                it_it = false;
              } 
          }
          if(it_it) break;
      } 
  }
 
 void insertion_sort(int arr[], int size){
     for(int i = 1; i < size; i++){
         int j = i;
         while(arr[j-1] > arr[j] && j >= 1){
             int temp = arr[j-1];
             arr[j-1] = arr[j];
             arr[j] = temp;
             j--;
         }
     }
 }
 
int main() {
  int num;
  cin >> num;
  int arr[num];
  for(int i = 0; i < num; i++){
      int n;
      cin >> n;
      arr[i] =  n;
  }
//   selction_sort(arr, num);
//   bubble_sort(arr, num);
  insertion_sort(arr, num);
  for(int i = 0; i < num; i++){
      cout << arr[i] <<  " "; 
  }
  return 0;
}
