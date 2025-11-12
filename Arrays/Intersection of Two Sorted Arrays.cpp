#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> intersectionSortedArrays(vector<int> a, vector<int> b){
         vector<int> intersection;
         for(int i = 0; i < a.size(); i++){
                int count  = 0;
                for(int j = 0; j < b.size(); j++){
                    if( intersection.size() > 0 && intersection[intersection.size()-1] == a[i] && a[i] == b[j]) count += 1;
                    else if(a[i] == b[j]){
                        intersection.push_back(a[i]);
                    }
              }
              if(count == 2) intersection.push_back(a[i]);
         }
         return intersection;
    }
};
