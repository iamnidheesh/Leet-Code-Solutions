class Solution {
public:
    bool validPalindrome(string s) {
        
        int l = 0,u = s.size()-1;
        bool flag = true;
        while(l < u) {
        	if(s[l] == s[u]) {
        		l++;
        		u--;
        	}
        	else {
                if(l+1 < s.size() && s[l+1] == s[u]) {
                    int k = l,m = u;
                    k++;
                    while(k < m) {
                        if(s[k] == s[m]) {
                            k++;
                            m--;
                        }
                        else {
                            flag = false;
                            break;
                        }
                    }
                    if(flag)
                        return flag;
                    flag = true;
                }
                if(u-1 >= 0 && s[l] == s[u-1]) {
                    int k = l,m = u;
                    m--;
                    while(k < m) {
                        if(s[k] == s[m])
                            k++,m--;
                        else {
                            flag = false;
                            break;
                        }
                    }
                    return flag;
                }
                else
                    return false;
               
            }
        }
        return flag;
    }
};