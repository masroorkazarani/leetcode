class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long score = 0;
            for (int i = k; i > 0; i--)
            {
                int maxElement = maxHeap.top();
                maxHeap.pop();
                score += maxElement;
                int newElement = ceil(maxElement/3.0);
                maxHeap.push(newElement);
            }
        return score;
    }
};