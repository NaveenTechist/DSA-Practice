#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int fibNum(int N){
        if(N == 0) return 0;
        if(N == 1 ) return 1;
        return fibNum(N-1) + fibNum(N-2);
    }
};
