class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minimum=INT_MAX,mi=0;
        int maximum =INT_MIN, mx=0;
        for(int i=0; i<nums.size(); i++){
        if(maximum<nums[i]){
            maximum=nums[i];
            mx=i;
        }
        if(minimum>nums[i]){
            minimum=nums[i];
            mi=i;
        }
        }
        int n=nums.size();
             int end=max(mi, mx)+1;
        int beg= n-min(mi, mx);
        int ans= min(mi, mx) + 1 + n - max(mi, mx);

        return min({beg,end,ans});
       
    }
};