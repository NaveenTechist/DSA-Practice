#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int reverseNumber(int N) {
        int reverse_number = 0;
        while(N != 0){
            int last_digit = N % 10;
            reverse_number = reverse_number * 10 + last_digit;
            N /= 10;
        }
        return reverse_number;
    }
};
