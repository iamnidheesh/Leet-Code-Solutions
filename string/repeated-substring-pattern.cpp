class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    	int i = 0;
        string pattern = "";
        bool flag = true;
    	while(i < s.size()) {
            pattern += s[i];
            i++;
            flag = true;
            for(int j = i;j < s.size();j += i) {
                if(j + i-1 >= s.size() || pattern != s.substr(j,j+i-1)) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                break;
            if(i == s.size()) {
                flag = false;
                break;
            }
        }
    	return flag;   
    }
};