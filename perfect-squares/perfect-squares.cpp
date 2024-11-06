class Solution {
public:
     int numSquares(int n) {
         
         // min value at i = count[i], initializing with 1s
         vector<int> count(n+1, INT_MAX-1);
         for(int i = 1; i*i <= n; i++) count[i*i]=1;
         
         for(int i = 1; i <= n; i++){
             for(int j = 1; j*j <= i; j++){
                 count[i] = min(count[i], 1 + count[i - j*j]);
             }
         }
         return count[n];
    }
};
