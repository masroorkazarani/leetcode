class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long right = 0,left = 0;
        long long total=0;
        int maxFreq = 0;

        for(right=0;right < nums.size();right++){
            
            total+=nums[right];
            
            while(nums[right]*(right-left+1) > total+k){
                total-=nums[left];
                left++;
            }
            maxFreq = max(maxFreq,(int)(right-left+1));
        }
        return maxFreq;
    }
};