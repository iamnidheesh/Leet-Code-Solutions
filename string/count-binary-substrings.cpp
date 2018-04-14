class Solution {
public:
    int countBinarySubstrings(string s) {
        vector <int> a (s.size(),0);
        int curr = 0,ans = 0;
        for(int i = 0;i < s.size();i++) {
        	if(s[i] == '0')
        		curr++;
        	else
        		curr = 0;
        	a[i] = curr;
        }
        curr = 0;
        for(int i = s.size()-1;i >= 0;i--) {
        	if(s[i] == '1')
        		curr++;
        	else
        		curr = 0;
            if(curr != 0)
        	    a[i] = -curr;
        }
        for(int i = 0;i < s.size()-1;i++) {
        	if(a[i] > 0 && a[i+1] < 0 )
        		ans += min(a[i],-a[i+1]);
        }
        a.clear();
         curr = 0;
        for(int i = 0;i < s.size();i++) {
        	if(s[i] == '1')
        		curr++;
        	else
        		curr = 0;
            a[i] = curr;
        }
        curr = 0;
        for(int i = s.size()-1;i >= 0;i--) {
        	if(s[i] == '0')
        		curr++;
        	else
        		curr = 0;
            if(curr != 0)
        	    a[i] = -curr;
        }
        for(int i = 0;i < s.size()-1;i++) {
        	if(a[i] > 0 && a[i+1] < 0)
        		ans += min(a[i],-a[i+1]);
        }
        return ans;
    }
};