class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int i = 0; // i means we have how many bits are 0 on the right
      while(m != n){
          // we need to find the common prefix in both numbers
        m >>= 1;
        n >>= 1;
        i++;  
      }  
      return m << i; 
    }
};