int order[26];
class Solution {
public:
	static bool cmp(char a,char b) {
		if(order[a-'a'] < order[b-'a'])
			return true;
		else
			return false;
	}
    string customSortString(string S, string T) {
  		
  		for(int i = 0;i < S.size();i++) {
  			order[S[i]-'a'] = i;
  		}
    	sort(T.begin(),T.end(),cmp);
    	return T;
    }
};