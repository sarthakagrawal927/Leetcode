class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> ts;
        for(auto c : s) ts[c]++;
        
        for(auto c : t){ if(ts[c] == 0) return c; ts[c]--;}
        return ' ';
    }
};