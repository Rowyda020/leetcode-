class Solution {
public:
    bool isPalindrome(int x) {
        int res=0;
        if(x<0 || ((x%10==0) && x!=0))
            return false;
        while(x>res){
            int rev=x%10;
            x/=10;
            res=res*10+rev;
        }
        return x==res || x==res/10;
    }
};