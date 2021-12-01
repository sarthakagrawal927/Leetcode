class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long int xori = 0;
        for(auto &n : nums) xori ^= n;
        
        // finding the right most bit
        long int mask = xori & (-xori);
        
        int a = 0,b=0;
        for(auto &n : nums) 
            if(n & mask)  // they have the same right most bit
                a^=n;
            else b^=n;
        
        return {a , b};
    }
};