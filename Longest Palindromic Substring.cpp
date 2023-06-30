class Solution {
public:
    string longestPalindrome(string s){
        string ans = "";
        int start = 0;
        int end = 0;
        int len = 0;
        for(int i = 1; i < s.size(); i++){
            //?_?
            int left = i - 1;
            int right = i + 1;
            while(left >= 0 && right <= s.size() && s[left] == s[right]){
                if(right - left + 1 > len){
                    len = right - left + 1;
                    start = left;
                    end = right;
                }
                
                left--;
                right++;
            }
            //®×?
            left = i - 1;
            right = i; 
            while(left >= 0 && right <= s.size() && s[left] == s[right]){
                if(right - left + 1 > len){
                    len = right - left + 1;
                    start = left;
                    end = right;
                }
                left--;
                right++;
            }
        }
        for(int n = start; n <= end; n++){
            ans += s[n];
        }
        return ans;
    }
};