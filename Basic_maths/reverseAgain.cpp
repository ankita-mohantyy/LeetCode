class Solution {
public:
    int reverseNumber(int n) {
        int rev=0;
        while(n!=0){
            rev=10*rev+n%10;
            n=n/10;
        }
        return rev;
    }
};