class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> use(26, false);
        string st = "";
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : s) {
            freq[c - 'a']--;
            if (use[c - 'a'])
                continue;
            while (!st.empty() &&
                   st.back() > c &&
                   freq[st.back() - 'a'] > 0) {
                use[st.back() - 'a'] = false;
                st.pop_back();
            }
            st.push_back(c);
            use[c - 'a'] = true;
        }
        return st;
    }
};