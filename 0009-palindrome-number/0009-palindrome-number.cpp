class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int original=x;
        while(x>0){
            int lastdig=x%10;
            x=x/10;
            rev=(rev*10)+lastdig;
        }
        if(original==rev){
            return true;
        }else{
            return false;
        }
        
    }
};