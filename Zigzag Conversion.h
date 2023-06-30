class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>storage(numRows);
        int index = 1;
        int j = 0;
        for(auto temp : s){
            if(index == 1){
                storage[j] += temp;
                j++;
                if(j == numRows){
                    j -= 2;
                    index = 2;
                }
            }
            else{
                storage[j] += temp;
                j--;
                if(j == -1){
                    j += 2;
                    index = 1;
                }
            }
        }
        string ans;
        for(auto str:storage){
            ans += str;
        
        }
        return ans;
    }
};