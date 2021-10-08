class Solution {
    vector<int> anagram(string s){
        vector<int> arr(26,0);
        for(auto c : s) arr[c - 'a']++;
        return arr;
    }
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ra = anagram(ransomNote);
        vector<int> ma = anagram(magazine);
        
        for(int i = 0; i < 26; i++){
            if(ma[i] < ra[i]) return false;
        }
        return true;
    }
};