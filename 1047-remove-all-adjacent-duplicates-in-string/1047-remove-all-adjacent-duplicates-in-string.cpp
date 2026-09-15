class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(st.empty() ||s[i]!=st.top())
            st.push(s[i]);
            else{
                st.pop();
            }
        }
         string ans = "";
         int i=0;
         while(!st.empty()){
         ans+=st.top();
         st.pop();
         i++;}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};