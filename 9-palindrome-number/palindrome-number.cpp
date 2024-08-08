class Solution {
public:
    bool isPalindrome(int x) {
        if(0 > x) return false;
        long long pal=0,rem;
        int temp = x;
        while(temp!=0){
            rem=temp%10;
            pal=pal*10+rem;
            temp=temp/10;
        }
        if(pal==x) return true;
        else return false;
    }
};