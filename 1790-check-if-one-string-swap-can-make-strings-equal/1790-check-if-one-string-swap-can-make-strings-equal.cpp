class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        int nonEq = 0;
        char ns11, ns12, ns21, ns22;
        for(int i = 0; i < n; i++){
            if(s1[i] != s2[i]){
                nonEq++;
                if(nonEq == 1) ns11 = s1[i], ns21 = s2[i];
                else ns12 = s1[i], ns22 = s2[i];
            }
        }
        if(nonEq != 0 && nonEq != 2) return 0;
        return nonEq == 0 || (ns11 == ns22 && ns12 == ns21);
    }
};