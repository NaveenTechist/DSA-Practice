// Companies
// Amazon
// Microsoft

#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> relativeSort(vector<int>& arr1, vector<int>& arr2) {
        vector<int> new_array;
        int indexes_array[arr1.size()] = {0};
        for(int i = 0; i < arr2.size(); i++){
            for(int j = 0; j < arr1.size(); j++){
                if(arr2[i] == arr1[j]) {
                    new_array.push_back(arr2[i]);
                    indexes_array[j] = 1;
                }
            }
        }
        vector <int> remaining_elements;
        for(int i = 0; i < arr1.size(); i++){
            if(indexes_array[i] == 0){
                remaining_elements.push_back(arr1[i]);
            }    
        }
        sort(remaining_elements.begin(), remaining_elements.end());
        for(int i = 0; i < remaining_elements.size(); i++){
            new_array.push_back(remaining_elements[i]);
        }
        return new_array;
    }
};
