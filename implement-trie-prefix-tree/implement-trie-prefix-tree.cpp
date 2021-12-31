class Trie {
    
public:
    
    struct TrieNode {
        // End of a word 
        bool isEnd = false ; 
        TrieNode *children[26];

        bool contains(char ch) {
            return children[ch - 'a'] != nullptr;
        }

        void put(char ch,TrieNode* newNode){
            children[ch-'a'] = newNode;
        }

        TrieNode* get(char ch){
            return children[ch-'a'];
        }

        void setIsEnd(){
            isEnd = true ;
        }

        bool getIsEnd(){
            return isEnd;
        }
    };
    
    TrieNode *root ;    
    Trie() {
        this->root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *ptr = root;
        for(char c : word){
            if(!ptr->contains(c)) {
                TrieNode *temp = new TrieNode();
                ptr->put(c,temp);
            }
            ptr = ptr->get(c);
        }
        ptr->setIsEnd();
    }
    
    bool search(string word) {
        TrieNode *ptr = root ;
        for(char c : word) {
            if(!ptr->contains(c)) return false ;
            ptr = ptr->get(c);
        }
        return ptr->getIsEnd() ;
    }
    
    bool startsWith(string prefix) {
        TrieNode *ptr = root ;
        for(char c : prefix) {
            if(!ptr->contains(c)) return false ;
            ptr = ptr->get(c);
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