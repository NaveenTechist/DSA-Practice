#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursiveSumOfSquares(int n) {
        if(n == 0) return 0;
        return n*n + recursiveSumOfSquares(n-1);
    }
};
