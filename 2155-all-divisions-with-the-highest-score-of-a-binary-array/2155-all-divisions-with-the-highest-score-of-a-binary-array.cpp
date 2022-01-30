class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n+1,0);
        
        for(int i = 0; i < n; i++) temp[i+1] = temp[i] + nums[i];
        int maxi = 0, total = temp[n];
        vector<int> ans;
        
        for(int i = 0; i <= n ; i++ ){
            int left = i - temp[i];
            int right = total - temp[i];
            
            int sumAtI = left + right;
            
            if(sumAtI > maxi){
                maxi = sumAtI;
                ans = {i};
            }
            else if (sumAtI ==maxi )ans.push_back(i);
        }
        return ans;
    }
};