/*
781. Count all Digits of a Number
You are given an integer n. You need to return the number of digits in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Example 1:
Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.*/

class Solution {
public:
    int countDigit(int n) {
        int count=1;
        while(n/10!=0){
            n=n/10;
            count++;
        }
        return count;
    }
};