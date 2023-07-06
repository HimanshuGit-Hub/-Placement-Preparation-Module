class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       int start = 0; unordered_map<char,int> t; int len = 0, ans = 0; 
       for(int i=0; i<s.length(); i++){
           if(t[s[i]] == 0){
               t[s[i]]++; len++;  
           }
           else {
               while(t[s[i]] !=0) {t[s[start] ]--; start++; len--;  }
               t[s[i]]++; len++; 
           }

           if(ans < len) ans = len;
       }

        return ans; 
    }
};