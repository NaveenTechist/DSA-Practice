#include<bits/stdc++.h>
using namespace std;
 
int main() {
    // Euclidean Theorem
    int a , b; 
    cin >> a >> b;
    while(a!= 0 && b != 0){
        if(a >= b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    cout << (a == 0 ? b : a) << endl;
    
    
    // int n1, n2;
    // cin >> n1 >> n2;
    // int gcd = 1;
    // for(int i = 1; i <= n1; i++){
    //     if(n1 % i == 0 && n2 % i == 0){
    //         gcd = i;
    //     }
    // }
    // cout << gcd << endl; 
  return 0;
}
