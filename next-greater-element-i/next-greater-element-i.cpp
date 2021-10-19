class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto n : nums1){
            int pass = 0, a =-1;
            for(auto n1 : nums2){
                if(n == n1) pass =1;
                if(pass && n < n1) {a = n1;break;}
            }
            ans.push_back(a);
        }
        return ans;
    }
};