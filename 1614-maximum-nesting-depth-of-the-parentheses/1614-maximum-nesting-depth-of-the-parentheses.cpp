class Solution {
public:
    int maxDepth(string s) {
     int d= 0,md=0;
        for (auto ch : s) {
            if (ch == '(') {
                d++;
                md = max(md,d);
            }
            else if (ch == ')') {
                d--;
            }
        }
        return md;
    }
};