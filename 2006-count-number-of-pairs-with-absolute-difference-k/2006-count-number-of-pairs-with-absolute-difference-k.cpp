class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int count = 0;
        for(auto n : nums){
            count += m[n+k] + m[n-k];
            m[n] +=1;
        }
        return count;
    }
};