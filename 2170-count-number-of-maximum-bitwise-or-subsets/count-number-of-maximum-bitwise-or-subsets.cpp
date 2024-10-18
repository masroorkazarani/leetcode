class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        max |= nums[i];
    }
    for(int i = 0;i < pow(2,nums.size());i++){
        int temp_max = 0;
        for(int j = 0;j < nums.size();j++){
            if(i & (1 << j)){
                temp_max|=nums[j];
            }
        }
        if(temp_max == max) count++;
    }
   return count;
    }
};