#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int recursionSum(int N) {
        if(N == 1) return 1;
        return recursionSum(N-1) + N;
    }
};
