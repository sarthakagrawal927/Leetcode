class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count = 0, sum = 0;
        unordered_map<int,int> sumOccurencesMap = {{ 0, 1 }}; // sum, freq
        
        for(auto n : nums){
            sum += n;
            count += sumOccurencesMap[sum - k];
            sumOccurencesMap[sum]++;
        }
        return count;
    }
};