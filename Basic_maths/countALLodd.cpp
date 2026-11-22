/*950. Count number of odd digits in a number
You are given an integer n. You need to return the number of odd digits present in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Example 1:
Input: n = 5

Output: 1

Explanation: 5 is an odd digit.*/
class Solution {
public:
    int countOddDigit(int n) {
        int count=0,odd;
        while(n!=0){
            odd=n%10;
            if(odd%2!=0){
                count++;
            }
            n/=10;
            
        }
        return count;
    
    }
};