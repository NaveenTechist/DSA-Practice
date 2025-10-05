
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> factorialSequence(int n) {
        if(n == 1) return {1};
        vector<long long> arr = factorialSequence(n-1);
         arr.push_back(n * arr.back());
        return arr;
     }
};
