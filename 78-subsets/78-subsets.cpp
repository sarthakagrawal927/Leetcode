class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> completeSet;
        int n = nums.size();
        unsigned long long int count =(int) pow(2,n);
        for(auto i = 0; i < count; i++){
            vector<int> item;
            for(auto j = 0; j < n; j++){
                if((i & (1 << j)) != 0) item.push_back(nums[j]);
            }
            completeSet.push_back(item);
        }
        return completeSet;
    }
};