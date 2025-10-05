#include <bits/stdc++.h>
using namespace std;

class solution {
    
    public:
    void reverseArraySection(vector<int>& arr, int left, int right) {
        if(left >=  right) return;
        swap(arr[left], arr[right]);
        reverseArraySection(arr, left+1, right-1);
    }
};
