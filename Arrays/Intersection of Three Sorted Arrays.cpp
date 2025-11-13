#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> getCommonElements(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> final_array;
        int i = 0, j = 0, k = 0;
        while(i < nums1.size() && j < nums2.size() && k < nums3.size() ){
            if(nums1[i] == nums2[j] && nums2[j] == nums3[k]){
                final_array.push_back(nums3[k]);
                i++;
                j++;
                k++;
            }else{
                int mini = min({nums1[i], nums2[j], nums3[k]});
                if(nums1[i] == mini) i++;
                if(nums2[j] == mini) j++;
                if(nums3[k] == mini) k++;
            }
        }
        
        // for(int i = 0; i < nums1.size(); i++){
        //     for(int j = 0; j < nums2.size(); j++){
        //         bool is_there = false;
        //         if(nums1[i] == nums2[j]){
        //             for(int k = 0; k < nums3.size(); k++){
        //                 if(nums2[j] == nums3[k]){
        //                     final_array.push_back(nums3[k]);
        //                     is_there = true;
        //                     break;
        //                 } 
        //             }
        //         }
        //         if(is_there) break;
        //     }
        // }
        return final_array;
    }
};
