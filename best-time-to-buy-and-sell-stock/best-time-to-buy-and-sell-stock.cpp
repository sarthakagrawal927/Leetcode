class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int bp = INT_MAX;
        
        for(int i = 0; i < prices.size(); i++){
            bp = min(bp, prices[i]);
            maxP = max(maxP, prices[i] - bp);
        }
        
        return maxP;
    }
};