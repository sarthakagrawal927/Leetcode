class Solution {
    vector<vector<int>> per;

public:
    void permuteHelp(vector<int>& nums, int i){
        if(nums.size() == i+1){
            per.push_back(nums);
        }
        
        // simple backtracking
        for(int j = i; j < nums.size(); j++){
            swap(nums[i],nums[j]);
            permuteHelp(nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permuteHelp(nums,0);
        return per;
    }
};