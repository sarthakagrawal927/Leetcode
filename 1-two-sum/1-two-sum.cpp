class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(target - nums[i]) != map.end()){
                ans[0] = i;
                ans[1] = map[target-nums[i]];
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};