class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size(), m = num2.size(),i,j;
        string ans(n+m, '0');
        if(num2 == "0" || num1 == "0") return "0";
        
        for(i = n-1; i >=0 ; i--){
            for(j = m-1; j >= 0; j--){
                int prod = (num1[i] - '0') * (num2[j] - '0') + ans[i+j+1] - '0';
                ans[i+j+1] = prod%10 + '0';
                ans[i+j] += prod/10;
            }
        }
        
        int k =0;
        while(ans[k++] == '0');

        return ans.substr(k-1);
    }
};