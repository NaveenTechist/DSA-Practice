#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int oddFunction(int n){
        if(n == 0) return 1;
        return n % 2 != 0 ? oddFunction(n-1) * n : oddFunction(n-1);
    }
    
    int evenFunction(int n){
        if(n == 0) return 1;
         return n % 2 == 0 ? evenFunction(n-1) * n : evenFunction(n-1);
    }
    
    int doubleFactorial(int n) {
        return n % 2 == 0 ?  evenFunction(n) : oddFunction(n);
    }
};
