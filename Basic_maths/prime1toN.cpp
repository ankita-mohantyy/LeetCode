/*
790. Count of Prime Numbers till N
You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.

A prime number is a number which has no divisors except, 1 and itself.

Example 1:
Input: n = 6

Output: 3

Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.*/

class Solution {
public:
    int primeUptoN(int n) {
        int count=0;
        for(int i=1;i<n+1;i++){
            int div=0
            for(int j=1;j<i+1;j++){
                if(i%j==0){
                    div++;
                }

            }
            if (div==2) count++;
        }
        
        return count;
    }
};

//not optimal, optimal is sieve method