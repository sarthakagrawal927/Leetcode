class Solution {
public:
    int countPrimes(int n) {
        vector<bool> arr(n,1);
        for(int i = 2; i*i < n; i++){
            if(arr[i]){
                for(int j = i*2; j < n; j+=i) arr[j] = 0;
            }
        }
        int count = 0;
        for(int i =2; i < n; i++) count += arr[i];
        return count;
    }
};