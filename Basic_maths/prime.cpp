/*
779. Check for Prime Number
You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

A prime number is a number which has no divisors except 1 and itself.

Example 1:
Input: n = 5

Output: true

Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.*/
class Solution {
public:
    bool isPrime(int n) {
        int div=0;
        for(int i=1;i<n+1;i++){
            if (n%i==0){
                div++;
            }
        }
        if (div==2) return true;
        else return false;
    }
};