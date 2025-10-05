#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void printEvenNumbers(int i, int n){
        if (i > n) return;
        if(i % 2 == 0) cout << i << " ";
        printEvenNumbers(i+1, n);
    }
    
    void printOddNumbers(int n){
        if(n == 0) return;
        if(n % 2 != 0) cout << n << " ";
        printOddNumbers(n-1);
    }
    
    void printEvenOdd(int n) {
       printEvenNumbers(1,n);
       printOddNumbers(n);
    }
};
