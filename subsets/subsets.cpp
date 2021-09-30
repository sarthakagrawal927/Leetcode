class Solution {

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> set;
        vector<int> curr;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < pow(2,i); j++){
                if(!set.size()){
                    curr = {};
                    set.push_back(curr);
                }
                else curr = set[j];
                curr.push_back(nums[i]);
                set.push_back(curr);
            }
        }
        return set;
    }
};