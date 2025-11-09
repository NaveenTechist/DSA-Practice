// Companies
// Facebook
// Google
// Uber
// Goldman Sachs
// Adobe
// Bloomberg
// Microsoft
// Yahoo
// Amazon

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> rotateArray(vector<int>& nums, int x, int y) {
        x = x % nums.size();
        y = y % nums.size();
        
        reverse(nums.end()-x , nums.end());
        reverse(nums.begin(), nums.end()-x);
        reverse(nums.begin(), nums.end()); 
        
        reverse(nums.begin() , nums.begin()+y);
        reverse(nums.begin()+y, nums.end());
        reverse(nums.begin(), nums.end());
        
        return nums;
    }
};
