class Solution {
public:
    int arrangeCoins(int n) {
        int i=1,count=0;
        while(n>=0){
            n-=i;
            i++;
            if(n>=0)
            count++;
        }
        return count;
    }
};