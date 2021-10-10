class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int i = 0;
        // common prefix

        while(left != right){
            left = left >> 1; right = right >> 1;
            i++;
        }
        return left << i;
    }
};