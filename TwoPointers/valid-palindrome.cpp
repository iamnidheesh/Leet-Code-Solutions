class Solution {
public:
    bool isPalindrome(string s) {
    	for(int i = 0;i < s.size();i++)
    		if(s[i] >= 'A' && s[i] <= 'Z')
    			s[i] = tolower(s[i]);
    		else if(!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9'))
    			s[i] = ' ';
    	bool flag = true;
    	int l = 0,u = s.size()-1;
    	while(l < u) {
    		while(s[l] == ' ' && l < s.size())
    			l++;
    		while(s[u] == ' ' && u > 0)
    			u--;
    		if(l >= u)
    			break;
    		if(s[l] == s[u]) {
    			l++;
    			u--;
    		}
    		else {
    			flag = false;
    			break;
    		}
    	}
    	return flag;
    }
    
};