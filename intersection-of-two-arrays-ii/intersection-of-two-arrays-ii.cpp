class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0, n = nums1.size(), m = nums2.size();
        vector<int> ans;
        while(i < n && j < m){
            int e1 = nums1[i], e2 = nums2[j];
            if(e1 == e2) {ans.push_back(e1); i++, j++;}
            else if(e1 < e2) i++;
            else j++;
        }
        return ans;
    }
};