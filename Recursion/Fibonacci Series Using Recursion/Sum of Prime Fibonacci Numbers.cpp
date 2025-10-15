#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int sum = 0;
    
    int primeOrNot(int n){
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0) count += 1;
        }
        return count == 2 ? n : 0;
    }
    
    int fibonacci(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fibonacci(n-1) + fibonacci(n-2);
    }

    int sumOfPrimeFibonacci(int n) {
        if(n == 0) return sum;
        int fibo = fibonacci(n);
         sum += primeOrNot(fibo);
       return  sumOfPrimeFibonacci(n-1);
    }
};
