class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        map <char,int> m;
        for(int i = 0;i < t.size();i++) {
        	m[t[i]] = i+1;
        }
        if(!m[s[0]])
        	return false;
        for(int i = 1;i < s.size();i++) {
        	if(m[s[i]] && m[s[i]] > m[s[i-1]])
        		continue;
        	else {
        		return false;
        	}
        }
        return true;
    }
};