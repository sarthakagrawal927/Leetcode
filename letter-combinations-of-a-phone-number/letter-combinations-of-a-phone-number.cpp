class Solution {
    const vector<string> data = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
public:
    vector<string> letterCombinations(string &digits) {
        if (digits.empty()) return {};
        
        vector<string> ans; 
        ans.push_back("");
        
        for(auto digit : digits){
            // for every digit
            
            vector<string> temp;
            // for every character for a digit
            for(auto c : data[digit - '0']){
                
                // for every preexisting answer
                for(auto s : ans){
                    temp.push_back(s + c);
                }
            }
            swap(ans,temp);
        }
        return ans;
    }
};