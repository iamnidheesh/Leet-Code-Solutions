class Solution {
public:
    string toGoatLatin(string S) {
        string ans = "";
        string a = "a";
        for(int i = 0;i < S.size();i++) {
        	char k = tolower(S[i]);
        	if(k == 'a' || k == 'e' || k == 'i'
        		|| k == 'o' || k == 'u') {
        		while(i < S.size() && S[i] != ' ') {
        			ans += S[i];
        			i++;
        		}
        		ans += "ma" + a;
        		if(i != S.size()) {
        			ans += ' ';
        			i++;
        		}
        	}
        	else {
        		k = S[i];
        		i++;
        		while(i < S.size() && S[i] != ' ') {
        			ans += S[i];
        			i++;
        		}
        		ans += k + "ma" + a;
        		if(i != S.size()) {
        			ans += ' ';
        			i++;
        		}
        	}
        	a += 'a';
        }
        return ans;
    }
};