class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        
        int i = m-1;
        int j = n-1;
        int idx = i+j+1;
        
        while(idx >= 0) {
            if(j < 0 || (i >= 0 && n1[i] > n2[j])) 
                n1[idx--] = n1[i--];
            
            else 
                n1[idx--] = n2[j--];
        }
    }
};