class Solution {
public:
    string decodeString(string s) {
         stack<int> count;
        stack<string> str;
        string curr = "";
        int num = 0;
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '[') {
                count.push(num);
                str.push(curr);
                num = 0;
                curr = "";
            }
            else if (c == ']') {
                int k = count.top();
                count.pop();
                string prev = str.top();
                str.pop();
                while (k--) {
                    prev = prev + curr;
                }
                curr = prev;
            }
            else {
                curr = curr + c;
            }
        }
        return curr;
    }
};