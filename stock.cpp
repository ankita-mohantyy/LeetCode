/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<prices.size();i++){
            int b,buy,j=0,profit;
            b=std::sort(prices.begin(),prices.end());
            buy=b[0];
            while(j<prices.size()){
                if(prices[j]<buy){
                    profit=0;
                }
                else{
                    profit=prices[j]-buy;
                }
                j++;
            }

        }
        cout<<profit;
        
    }
};*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
        
};

//INT_MAX is the max int possible
