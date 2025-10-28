#include<bits/stdc++.h>
using namespace std;

int second_large(vector <int> arr, int n){
    int max = arr[0];
    int second_max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        }
        if(arr[i] > second_max && arr[i] < max) second_max = arr[i];
    }
    return second_max;
}
 
int main() {
    int size;
     cin >> size;
  vector<int> arr(size);
  for(int i = 0; i < size; i++){
      cin >> arr[i];
  }
//      for(int i = 0; i < size; i++){
//       cout << arr[i] << " ";
//   }
  cout << second_large(arr, size);

  return 0;
}
