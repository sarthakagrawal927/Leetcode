class Trie{
    public:
  Trie *next[26] = {};
    string word;
    Trie(){}
    void addWords(vector<string> words){
        for(auto word : words) addWord(word);
    }
    
    void addWord(string word){
        Trie *node = this;
        for(auto c : word){
            int idx = c - 'a';
            if(!node -> next[idx]) node -> next[idx] = new Trie();
            node = node -> next[idx];
        }
        node -> word = word;
    }
};


class Solution {
    vector<string> ans;
    int n,m;
    void dfs(vector<vector<char>> &board, Trie* node, int r, int c){
        char ct = board[r][c];

        if(ct == '*' || node ->next[ct-'a'] == NULL) return;
                
        node = node -> next[ct-'a'];
        
        if((node -> word).size()){
            ans.push_back(node -> word);
            node -> word = "";
        }
        

        board[r][c] = '*';
        if(r < n-1) dfs(board,node,r+1,c) ;
        if(c < m-1) dfs(board,node,r,c+1);
        if(r > 0) dfs(board,node,r-1,c);
        if(c > 0)  dfs(board,node,r,c-1);
        board[r][c] = ct;
    }
    
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        n = board.size(), m = board[0].size();
        
        Trie* root = new Trie();
        root -> addWords(words);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                dfs(board,root,i,j);

        return ans;
    }
};