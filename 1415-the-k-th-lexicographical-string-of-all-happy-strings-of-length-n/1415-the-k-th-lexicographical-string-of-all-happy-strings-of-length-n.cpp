class Solution {
public:
    string getHappyString(int n, int k) {
        int length = 3 * (int)pow(2,n);
        if(length < k) return "";
        vector<string> arr = {"a","b","c"}, temp;
        for(int i = 1; i < n; i++ ){
            int range = 3 * (int)pow(2,i);
            temp.resize(range);
            cout << temp.size() << " ";
            for(int j = 0; j < range; j+=2){
                temp[j] = temp[j+1] = arr[j/2];
                // find next character
                char lastCharacter = temp[j][i-1], next1, next2;
                switch(lastCharacter){
                    case 'a': 
                        next1 = 'b', next2 = 'c';
                        break;
                    case 'b':
                        next1 = 'a', next2 = 'c';
                        break;
                    default: 
                        next1 = 'a', next2 = 'b';                        
                }
                temp[j] += next1;
                temp[j+1] += next2;
            }
            arr = temp;
            temp = {};
        }
        return arr[k-1];
    }
};