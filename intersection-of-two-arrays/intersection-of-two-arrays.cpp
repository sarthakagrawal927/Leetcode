class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> se,se2;
        for(auto n : nums1) se.insert(n);
        for(auto n : nums2) if(se.find(n) != se.end()) se2.insert(n);
        vector<int> ans(se2.begin(), se2.end());
        return ans;
        
    }
};