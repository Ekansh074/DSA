class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        int x,y,r;
        for (auto &q : queries) {
             x = q[0];
             y = q[1];
             r = q[2];
            int count = 0;
            for (auto &p : points) {
                int dx = p[0] - x;
                int dy = p[1] - y;
                if (dx * dx + dy * dy <= r * r) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};