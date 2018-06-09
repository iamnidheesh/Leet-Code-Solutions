class Solution {
public:


	static bool cmp(string a,string b) {
		if(a.size() > b.size())
			return true;
		else if(a.size() == b.size()) {
			if( a < b)
				return true;
			else
				return false;
		}
		else
			return false;

	}
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end(),cmp);
        string ans = "";
        for(int i = 0;i < d.size();i++) {
        	int l = 0;
        	int k = 0;
        	while(l < d[i].size() && k < s.size()) {
        		if(d[i][l] == s[k]) {
        			l++;
        			k++;
        		}
        		else
        			k++;
        	}
        	if(l == d[i].size()) {
        		ans = d[i];
        		break;
        	}
        }
        return ans;
    }
};