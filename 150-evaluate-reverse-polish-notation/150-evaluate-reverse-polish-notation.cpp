class Solution {
public:
    bool isOperation(string s){
        return s == "/" ||  s == "*" || s == "-" || s == "+";
    }
    
    int handleOperation(char s, int a, int b){
        switch(s){
            case '*':
                return  a*b;
            case '+':
                return  a+b;
            case '-':
                return  a-b;
            case '/':
                return  a/b;
        }
        return 0;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(auto token : tokens){
            if(isOperation(token)){
                int a = stk.top(); stk.pop();
                int b = stk.top(); stk.pop();
                stk.push(handleOperation(token[0],b,a));
            }
            else stk.push(stoi(token));
        }
        return stk.top();
    }
};