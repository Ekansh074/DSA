class Solution {
public:
    int rob(vector<int>& nums) {
        int p2 = 0;
        int p1 = 0;
        for (int m : nums) {
            int take = p2 + m;
            int skip = p1;
            int cur= max(take, skip);
            p2 = p1;
            p1 = cur;
        }
        return p1;
    }
};