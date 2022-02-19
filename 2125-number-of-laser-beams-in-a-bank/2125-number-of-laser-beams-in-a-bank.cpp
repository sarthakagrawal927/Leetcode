class Solution {
    int count1s(string s){
        int count = 0;
        for(auto c : s) count += c - '0';
        return count;
    }
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> arr;
        for(auto lights : bank){
            int c = count1s(lights);
            if(c) arr.push_back(c);
        }
        int prod = 0;
        if(!arr.size()) return 0;
        for(int i = 0; i < arr.size()-1; i++){
            prod += arr[i]*arr[i+1];
        }
        return prod;
    }
};