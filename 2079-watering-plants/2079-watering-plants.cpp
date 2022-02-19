class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0, current = capacity, n = plants.size();
        for(int i = 0; i < n; i++ ){
            if(current - plants[i] < 0){
                current = capacity;
                steps += 2*i;
            }
            current -= plants[i];
        }
        return steps+n;
    }
};