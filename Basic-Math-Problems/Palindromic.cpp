#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPalindrome(int n) {
        int temp_palindromic = n;
        int reverse_var = 0;
        while(n != 0){
            int last_digit = n % 10;
            reverse_var = reverse_var * 10 + last_digit;
            n /= 10;
        }
        return temp_palindromic == reverse_var;
    }
};
