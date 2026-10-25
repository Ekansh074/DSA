class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        int j = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == j) {
                j++;
            }
            else if (nums[i] > j) {
                ans.push_back(j);
                j++;
                i--; 
            }
        }
        while (j <= n) {
            ans.push_back(j);
            j++;
        }
        return ans;
    }
};