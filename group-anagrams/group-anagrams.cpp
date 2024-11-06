class Solution {
public:
    string findAnagram(string &s){
        vector<int> arr(26,0);
        for(auto c : s) arr[c - 'a']++;
        string t;
        for(int i = 0; i < 26; i++)
            t += string(arr[i], i+'a');
        return t;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        for(auto s : strs){
            m[findAnagram(s)].push_back(s);
        }
        for(auto s : m) ans.push_back(s.second);
        return ans;
    }
};