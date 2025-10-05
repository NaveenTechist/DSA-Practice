//SAMSUNG ASKED
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int recursionFactorial(int n) {
        if(n ==1) return 1;
        return recursionFactorial(n-1) * n;
    }
};
