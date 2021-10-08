class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int num = n * m;
        int lo = 0, hi = num-1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(matrix[mid / n][mid % n] == target) return true;
            else if(matrix[mid / n][mid % n] < target) lo = mid + 1;
            else hi = mid -1;
        }
        return false;
    }
};