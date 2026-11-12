class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long remains=0,run=0;

        while(run!=k){
            sort(gifts.rbegin(), gifts.rend());
            gifts[0]=floor(sqrt(gifts[0]));
            run++;

        }  
        for(int i=0;i<gifts.size();i++){
            remains+=(long long)gifts[i];
        }  

        return remains;
    
    }
};

/*    int n = gifts.size();
        priority_queue<int> pq; // max heap
        for (int i = 0; i < n; i++) {
            pq.push(gifts[i]);
        }
        while (k--) {
            int maxi = pq.top();
            pq.pop();

            int remaining = sqrt(maxi);

            pq.push(remaining);
        }

        long long ans = 0;
        while (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }

        return ans;
        
        optimal solution, mine was too much time consuming*/