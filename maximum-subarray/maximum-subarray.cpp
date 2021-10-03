class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int ans = nums[0];
        for(int i = 0; i < nums.size(); i++){
            curr = max(nums[i] , curr + nums[i]);
            ans = max(curr, ans);
        }
        return ans;
    }
};