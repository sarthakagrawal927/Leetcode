class Solution {
    bool isMatch(char c1, char c2){
        if(c1 == '(' && c2 == ')') return true;
        if(c1 == '[' && c2 == ']') return true;
        if(c1 == '{' && c2 == '}') return true;
        return false;
    }
public:
    bool isValid(string s) {
        int top = -1;
        for(int i = 0; i < s.size(); i++){
            if(top < 0 || !isMatch(s[top], s[i])){
                top++;
                s[top] = s[i];
            }
            else top--;
        }
        
        return top == -1;
    }
    
};