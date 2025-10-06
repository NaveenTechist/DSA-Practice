#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int gcdFunction(int a, int b){
        if(b == 0) 
          return a;
        return gcdFunction(b, a % b );
    }

    int lcmArray(vector<int>& arr) {
        int n = arr.size();
        int lcm =  arr[0];
        for (int i = 1; i < n; i++){
            int a = lcm;
            int b = arr[i]; 
            int gcd  = gcdFunction(a, b);
            lcm = (1LL *(lcm / gcd ) *b) % (1000000007);
        }
        return lcm;
    }
};
