class Solution {
public:
    bool isPowerOfTwo(int x) {
        if(x == INT_MIN) return 0;
        
        // non 0 && only 1 set bit
        return x && (!(x&(x-1))); 
    }
};