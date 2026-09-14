class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,mul=1;
        int temp=n;
        while(n>0){
            int rem= n%10;
            sum=sum+rem;
            mul=mul*rem;
            n=n/10;
        }
     int k=mul+sum;
 if(temp%k ==0)
        return true;
        else{
        return false;}
    }
};