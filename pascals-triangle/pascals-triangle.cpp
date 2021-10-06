class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> start = {1};
        ans.push_back(start);
        while(ans.size() < numRows){
            vector<int> temp = ans[ans.size()-1];
            vector<int> next(temp.size()+1,1);
            for(int i = 1; i < next.size()-1; i++){
                next[i] = temp[i-1] + temp[i];
            }
            ans.push_back(next);
        }
        return ans;
    }
};