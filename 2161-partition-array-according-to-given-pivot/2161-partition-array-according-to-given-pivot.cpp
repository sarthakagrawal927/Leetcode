class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int early = 0, n = nums.size(), count = 0;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            early += (nums[i] < pivot);
            count += (nums[i] == pivot);
        }
        cout << early << " " << count;
        int left = 0, right = early+count;
        for(auto n : nums){
            if(n < pivot) ans[left++] = n;
            else if(n > pivot) ans[right++] = n;
        }
        for(int i = early; i < early+count; i++) ans[i] = pivot;
        return ans;
    }
};