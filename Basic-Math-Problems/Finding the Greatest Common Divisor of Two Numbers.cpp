#include<bits/stdc++.h>
using namespace std;
class solution {
  public:
    int gcd(int A, int B) 
  	{ 
          while(A!= 0 && B != 0){
              if(A >= B){
                  A = A % B; 
              }else{
                  B = B % A;
              }
            }
            return (A == 0 ? B : A);
      }
};
