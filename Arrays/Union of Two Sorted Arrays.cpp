#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> unionOfTwoSortedArrays(vector<int> a, vector<int> b){
        // vector<int> new_array;
        // int i = 0;
        // int j = 0;
        // while(i < a.size() && j < b.size()){
        //     if(a[i] < b[j]){
        //         new_array.push_back(a[i]);
        //         i++;
        //     }else{
        //         new_array.push_back(b[j]);
        //         j++;
        //     }
        // }
        // while(i < a.size()){
        //     new_array.push_back(a[i]);
        //     i++;
        // }
        // while(j < b.size()){
        //     new_array.push_back(b[j]);
        //     j++;
        // }
        // vector<int> s;
        // int pointer = 0;
        // for(int i = 1; i <= new_array.size(); i++){
        //     if(new_array[pointer] != new_array[i]) {
        //         s.push_back(new_array[pointer]);
        //     }
        //     pointer++;
        // }
        // return s;
        
        set<int> union_ints;
        int itterations = a.size() > b.size() ? a.size() : b.size();
        for(int i = 0; i < itterations; i++){
            if(i < a.size()) union_ints.insert(a[i]);
            if(i < b.size()) union_ints.insert(b[i]);
        }
        vector<int> new_array;
        for(auto i : union_ints) new_array.push_back(i);
        return new_array;
    }
};
