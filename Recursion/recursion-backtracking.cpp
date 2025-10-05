#include<bits/stdc++.h>
using namespace std;

//BACKTRACKING
 void print(int i, int n){
     if(i == n) return;
     print(i, n-1);
     cout << n << endl;
 }
 
int main() {
  int n;
  cin >> n;
  print(0, n);
  return 0;
}
