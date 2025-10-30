#include<bits/stdc++.h>
using namespace std;

bool is_sorted_array(int arr[], int size){
    for(int i = 1; i < size-1; i++){
        if(arr[i-1] > arr[i]) return false;
    }
    return true;
}

int remove_duplicates_in_array(int arr[], int size){
    set<int> s;
    for(int i = 0; i < size; i++){
        s.insert(arr[i]);
    }
    int j = 0;
    for(auto i : s){
        arr[j] = i;
        j++;
    }
    return s.size();
}
 
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
      cin >> arr[i];
  }
//cout << is_sorted_array(arr, n) << endl; 
  cout << remove_duplicates_in_array(arr, n) << endl;
//   for(int i = 0; i < n; i++){
//       cout << arr[i] << " ";
//   }
  return 0;
}
