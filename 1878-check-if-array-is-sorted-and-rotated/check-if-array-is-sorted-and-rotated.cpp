class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size()-1;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]>nums[i+1]) count++;
        }
        if(nums[n]>nums[0]) count++;
        return count<=1;
        
        
    }
};