class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n <= 2) return 0;
        
        int leftMax = 0, rightMax = 0, left = 0, right = n-1;
        
        int ans = 0;
        while(left < right){
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);
            if(leftMax < rightMax) ans += leftMax - height[left++];
            else ans += rightMax - height[right--];
        }
        return ans;
    }
};