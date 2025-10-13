#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> generateGeneralizedFibonacci(int k, vector<int>& start, int n) {
        if(start.size() == n) return start;
        int sum_nums = 0;
        for(int i = start.size() - k; i < start.size(); i++){
            sum_nums += start[i]; 
        }
        start.push_back(sum_nums);
        return generateGeneralizedFibonacci(k, start, n);
    }
};
