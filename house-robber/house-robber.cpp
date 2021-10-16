class Solution {
public:
    int rob(vector<int>& arr) {
        int n = arr.size();
        int first = arr[0];
        if(n == 1) return first;
        
       int second = max(arr[0], arr[1]);
        if(n == 2) return second;
        
        int ans;
        for(int i = 2; i < n; i++){
            ans = max(second, arr[i] + first);
            first = second;
            second = ans;
        }
        return ans;
    }
};