class Solution {
public:
    int missingNumber(vector<int>& nums) {
      
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) if(nums[i] != i) return i;
        return nums.size();
      

        // for(int i = 0; i <= nums.size(); i++){
        //     bool sample  = true;
        //     for(int j = 0; j < nums.size(); j++){
        //         if(i == nums[j]){
        //             sample = false;
        //             break;
        //         } 
        //     }
        //     if(sample) return i;
        // }
        // return -1;
    }
};
