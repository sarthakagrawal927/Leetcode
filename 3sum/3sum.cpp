class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        ans.reserve(nums.size()/2);
        if(nums.size() < 3) return {};
        for(int i = 0; i < nums.size() - 1; i++){
            if(i && nums[i] == nums[i-1]) continue;
            int lo = i+1, hi = nums.size() -1;
            while(lo < hi){
                if((nums[i] + nums[hi] + nums[lo]) == 0) {
                    ans.push_back({ nums[i], nums[lo], nums[hi]});
                    while(lo+1 < hi && nums[lo] == nums[lo+1]) lo++;
                    while(hi-1 > lo && nums[hi] == nums[hi-1]) hi--;
                    lo++,hi--;
                }
                else if (nums[i] + nums[hi] + nums[lo] < 0) lo++;
                else hi--;
            }
        }
        return ans;
    }
};