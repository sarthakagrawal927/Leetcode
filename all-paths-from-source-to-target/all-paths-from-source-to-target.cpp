class Solution {
    vector<vector<int>> ans;
    vector<int> path;
    int n;
    void dfs(vector<vector<int>> &graph,int start){
        path.push_back(start);
        if(start == n-1) ans.push_back(path);
        else{
            for(int i = 0; i < graph[start].size(); i++){
                dfs(graph,graph[start][i]);
            }
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        dfs(graph,0);
        return ans;
    }
};


