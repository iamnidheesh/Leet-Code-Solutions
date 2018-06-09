class Solution {
public:
    int lengthOfLastWord(string s) {
    	
    	int ans = 0,k = s.size()-1;
   		while(k >= 0 && s[k] == ' ')
   			k--;
   		while(k >= 0 && s[k] != ' ') {
   			k--;
   			ans++;
   		} 
   		return ans;   
    }
};