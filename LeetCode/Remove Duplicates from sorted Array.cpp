class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = nums.size();
        int j = 0, sample = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[j]){
                count--;
            }else{
                nums[sample] = nums[i];
                sample++;
            }
            j++;
        }
        return count;
    }
};
