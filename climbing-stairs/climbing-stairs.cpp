class Solution {
    int climbStairs(int n, vector<int> &arr){
        if(n <= 2) return arr[n];
        if(arr[n] != 0) return arr[n];
        arr[n] = climbStairs(n-1, arr) + climbStairs(n-2, arr);
        return arr[n];
    }
public:
    int climbStairs(int n) {
        vector<int> arr(46);
        arr[1] = 1, arr[2] = 2; 
        return climbStairs(n,arr);
    }
};