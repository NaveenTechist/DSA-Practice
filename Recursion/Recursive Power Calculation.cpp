#include <bits/stdc++.h>
using namespace std;


class solution{
    double final_result = 1;
    public:
    double recursivePower(double a, int b) {
        if(b == 0)return final_result; 
        final_result *= a;
        recursivePower(a, b-1);
    }
};
