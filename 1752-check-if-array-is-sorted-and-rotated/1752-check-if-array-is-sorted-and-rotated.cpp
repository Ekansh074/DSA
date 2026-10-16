class Solution {
public:
    bool check(vector<int>& nums) {
        int t=nums[0];
        int count=0;
        for(int i=1; i<nums.size(); i++){
            if(t>nums[i])
            count++;
            t=nums[i];
        }
        if(t>nums[0]){
            count++;
        }
        return count<=1;
    }
};