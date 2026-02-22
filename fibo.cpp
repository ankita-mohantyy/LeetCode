//My solution=7ms

class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
};


//another sol=1 ms

class Solution {
public:
    int fib(int n)
    {
        vector<int> arr(n+3);
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;

        for(int i=3 ; i<=n ; i++)
        {
            arr[i]=arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};