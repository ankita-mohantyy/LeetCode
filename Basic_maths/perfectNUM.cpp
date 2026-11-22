/*
745. Check for Perfect Number
You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.

A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.

Example 1:
Input: n = 6

Output: true

Explanation: Proper divisors of 6 are 1, 2, 3.

1 + 2 + 3 = 6.*/

class Solution {
public:
    bool isPerfect(int n) {
        vector<int> div;
        int sum=0;
        for(int i=1;i<n;i++){
            if (n%i==0){
                div.push_back(i);
            }
        }
        for (int i=0;i<div.size();i++){
            sum+=div[i];
        }
        if (sum==n) return true;
        else return false;
    }
};