class Solution {
    vector<string> result;
    void helper(int leftNeed, string curr = "", int rightNeed = 0){
        
        if(!leftNeed && !rightNeed) result.push_back(curr);
        if(leftNeed > 0) helper(leftNeed - 1, curr + "(", rightNeed+1);
        if(rightNeed > 0) helper(leftNeed, curr + ")", rightNeed - 1);
            
    }
public:
    vector<string> generateParenthesis(int n) {
        helper(n);
        return result;
    }
};