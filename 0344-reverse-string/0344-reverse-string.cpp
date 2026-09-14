class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int i;
        for( i=0;i<s.size();i++){
            st.push(s[i]);
        }
        i=0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
        
    }
};