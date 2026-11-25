class Solution{
public:
	int sum(int arr[], int n) {
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
	  
	}
};