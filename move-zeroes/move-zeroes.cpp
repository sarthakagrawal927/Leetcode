class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        for(auto n : nums){
            if(n) nums[i++] = n;
        }
        nums.resize(i);
        nums.resize(size);
    }
};