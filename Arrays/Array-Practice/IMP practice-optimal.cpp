#include<bits/stdc++.h>
using namespace std;

// INPUTS:
// 9 
// 3 5 9 4 9 6 5 3 4

int unsort_map_single_ele_find(int arr[], int n){
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        map[arr[i]]++;
    }
    for(auto l : map ){
      if(l.second == 1) return l.first;
    }
    return -1;
}

int xor_opr(int arr[], int n){
    int xor_1 = 0;
    for(int i = 0; i < n; i++) xor_1 ^= arr[i];
    return xor_1;
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
      cin >> arr[i]; 
  }
  
  cout << unsort_map_single_ele_find(arr, n);
//   cout << xor_opr(arr, n);
  
//   for(int i = 0; i < n; i++){
//       cout << arr[i] << " " ; 
//   }
  
  
  return 0;
}
