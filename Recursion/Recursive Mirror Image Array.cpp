#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int i = 0;
    bool isMirrorImage(vector<int>& arr, int n){
        if(i >= n / 2) return true;
        if(arr[i] != arr[n-1-i]) return false;
        i++;
        return isMirrorImage(arr, n);
    }
};
