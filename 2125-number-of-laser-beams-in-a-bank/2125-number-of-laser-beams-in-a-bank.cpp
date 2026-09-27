class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int pre = 0;
        for (string row : bank) {
            int cur = 0;
            for (char c : row) {
                if (c == '1') {
                    cur++;
                }
            }
            if (cur > 0) {
                ans += pre * cur;
                pre = cur;
            }
        }
        return ans;
    }
};