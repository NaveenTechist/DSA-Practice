#include<bits/stdc++.h>
using namespace std;


//BACKTRACKING-REVERSE
 void print(int i, int n){
     if(i == n+1) return;
     print(i+1, n);
     cout << i << endl;
 }
 
int main() {
  int n;
  cin >> n;
  print(1, n);
  return 0;
}
