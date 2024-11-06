class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int p2i[26] {};
        unordered_map<string, int> w2i;
        istringstream in(str);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (i == n || p2i[pattern[i] - 'a'] != w2i[word])
                return false;
            p2i[pattern[i] - 'a'] = w2i[word] = i + 1;
        }
        return i == n;
    }
};