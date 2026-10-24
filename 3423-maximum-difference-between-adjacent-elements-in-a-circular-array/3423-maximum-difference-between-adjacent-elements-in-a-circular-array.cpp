class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int d;
        for (int i = 0; i < n; i++) {
            d = abs(nums[i] - nums[(i + 1) % n]);
            ans = max(ans, d);
        }
        return ans;
    }
};