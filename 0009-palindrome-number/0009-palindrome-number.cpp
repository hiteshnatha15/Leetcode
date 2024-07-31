class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        int temp=x;
        if(x<0)
        return false;
        while(temp){
            ans=(ans*10)+temp%10;
            temp/=10;
        }
        return x==ans;
    }
};