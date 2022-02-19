class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust1) {
        vector<int> trust(n,0);
        for(auto t : trust1){
            trust[t[1]-1]++;
            trust[t[0]-1]--;
        }
        for(int i = 0; i < n; i++){
            if(trust[i] == n-1) return i+1;
        }
        return -1;
    }
};