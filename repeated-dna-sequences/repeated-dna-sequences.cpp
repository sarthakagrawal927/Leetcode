class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string t = s.substr(0,10);
        unordered_map<string,int> m = {{ t, 1}};
        
        for(int i = 10; i < s.size(); i++){
            t = t.substr(1);
            t+=s[i];
            m[t]++;
        }
        
        vector<string> ans;
        
        for(auto i : m){
            if(i.second >= 2) ans.push_back(i.first);
        }
        
        return ans;
    }
};