// This question is asked in following companies
// Uber
// Apple
// Amazon
// Zoho
// Google
// Zenefits
// Microsoft
// Bloomberg

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int i = 0;
    bool checkPalindrome(string s){
        int size = s.size();
        if(i >= size/2) return true;
        if(s[i] != s[size-1-i]) return false;
        i++;
       return checkPalindrome(s);
    }
};
