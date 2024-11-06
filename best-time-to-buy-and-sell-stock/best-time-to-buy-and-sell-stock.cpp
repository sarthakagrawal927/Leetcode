class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leastBP = INT_MAX, maxP = 0;
        for(auto p : prices){
            leastBP = min(leastBP, p);
            maxP = max(maxP, p - leastBP);
        }
        return maxP;
    }
};