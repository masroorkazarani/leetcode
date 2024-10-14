class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
    for (int num : nums)
    {
       if(num == 0) count++;
    }
   remove(nums.begin(),nums.end(),0);
   for (int i=nums.size()-count; i<nums.size();i++)
   {
       nums[i] = 0;
   }
   for (int num : nums)
   {
       cout << num << " ";
   }
    }
};