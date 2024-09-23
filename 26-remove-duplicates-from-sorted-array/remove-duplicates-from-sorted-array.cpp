class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        temp.insert(nums[i]);
    }
    auto it = temp.begin();
    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = *it;
        ++it;
    }
    return temp.size();
    }
};