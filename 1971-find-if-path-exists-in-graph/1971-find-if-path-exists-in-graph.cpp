class Solution {

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph; 
        for(auto e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
            
        queue<int> q;  
        q.push(source);
        vector<int> vis(n,0);
        vis[source] = 1;
        while(q.size()){
            int curr = q.front();
            q.pop();
            if(curr == destination) return 1;
            for(auto e : graph[curr]){
                if(!vis[e]) {q.push(e); vis[e]=1;}
            }
        }
        return 0;
    }
};