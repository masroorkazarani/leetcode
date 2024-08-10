class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
    
    long long left = 0, right = 0;
    long long total = 0;
    int maxFreq = 1;
    
    for (right = 0; right < nums.size(); right++) {
        total += nums[right];
        
        // While the current window is not valid
    while (nums[right] * (right - left + 1) > total + k) 
    {
            total -= nums[left];
            left++;
        }
        
        // Update max frequency
        maxFreq = max(maxFreq, (int)(right - left + 1));
    }
    
    return maxFreq;
    }
};