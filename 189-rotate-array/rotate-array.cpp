class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int rotations = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + rotations);
    reverse(nums.begin() + rotations, nums.end());
    }
};