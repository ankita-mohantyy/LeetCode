
/*957. Return the Largest Digit in a Number
You are given an integer n. Return the largest digit present in the number.

Example 1:
Input: n = 25

Output: 5

Explanation: The largest digit in 25 is 5.*/

class Solution {
public:
    int largestDigit(int n) {
        int largest=n%10;
        if (n==0) return 0;
        while(n>0){
            n=n/10;
            if((n%10)>largest){
                largest=n%10;
            }
        }
        return largest;

    }
};