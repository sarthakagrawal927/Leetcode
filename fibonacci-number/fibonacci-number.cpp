class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, c;
        if( n == 0) return 0;
        if( n == 1) return 1;
        for(int i = 2; i <=n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};