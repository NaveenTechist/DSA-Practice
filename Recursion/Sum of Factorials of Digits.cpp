#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    
    int eachFact(int n){
        if(n == 0) return 1;
        return eachFact(n-1) * n ;
    }
    
    int sumOfFactorialsOfDigits(int n) {
        int sum = 0;
        while(n != 0){
            int last_digit = n % 10;
            sum += eachFact(last_digit);
            n /= 10;
        }
        return sum;
    }
};
