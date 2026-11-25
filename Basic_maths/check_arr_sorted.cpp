class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        int i=0,j=1;
        while(j<n){
            if (arr[i]<=arr[j]){
                i++; j++;
            }
            else return false;
        }
        return true;
    }
};
