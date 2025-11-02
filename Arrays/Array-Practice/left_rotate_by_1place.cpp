#include<bits/stdc++.h>
using namespace std;

// void sample_fucntion(int arr[], int n, int k) {
//     int first_elements[k];
//     for(int i = 0; i < k; i++) first_elements[i] = arr[i];
//     for(int i = k; i < n; i++) arr[i-k] = arr[i];
//     for(int i = k+1; i < n; i++) arr[i] = first_elements[i-(n-k)];
// }

void sample_fucntion(int arr[], int n, int k) {
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}
 
int main() {
    int n, k;
    cin >> n;
    cin >> k;
    k = k % n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sample_fucntion(arr, n, k);
     for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
    
  return 0;
}
