class Solution {
public:
    long int getSquareSum(int n){
        long int s = 0;
        while(n){
            int dig = n%10;
            s = s + dig*dig;
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        unordered_map<int,bool> s;
        while(true){ 
            if(n == 1) return true;
            if(s[n]) {  return false;}
            s[n] = true;
            n = getSquareSum(n);
        }
        return false;
    }
};