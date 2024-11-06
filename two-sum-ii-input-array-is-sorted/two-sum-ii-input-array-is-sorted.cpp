class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(target - nums[i]) != s.end()){
                ans[0] = s[target- nums[i]]+1, ans[1] = i+1;
                return ans;
            }
            s.insert({nums[i],i});
        }
        return ans;
    }
};