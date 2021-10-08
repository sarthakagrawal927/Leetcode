class Trie {
    Trie *next[26] = {};
    bool isWord = 0;
public:
    /** Initialize your data structure here. */
    Trie() {
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie *node = this;
        for(auto ch : word){
            if(!node -> next[ch - 'a']) node -> next[ch - 'a'] = new Trie();
            node = node -> next[ch - 'a'];
        }
        node -> isWord = 1;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie *node = this;
        for(auto ch : word){
            if(!node -> next[ch - 'a']) return false;
            node = node -> next[ch - 'a'];
        }
        return node -> isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie *node = this;
        for(auto ch : prefix){
            if(!node -> next[ch - 'a']) return false;
            node = node -> next[ch - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */