class Solution {
public:
    vector <string> ans;
    string v;
    void permute(int x,string &s) {
        if(x == s.size()) {
            ans.push_back(v);
            return;
        }
        if(s[x] >= '0' && s[x] <= '9' ) {
            v += s[x];
            permute(x+1,s);
            v.pop_back();
        }
        else {
            if(isupper(s[x])) {
                v += tolower(s[x]);
                permute(x+1,s);
                v.pop_back();
                v += s[x];
                permute(x+1,s);
                v.pop_back();
            }
            else {
                v += s[x];
                permute(x+1,s);
                v.pop_back();
                v += toupper(s[x]);
                permute(x+1,s);
                v.pop_back();
            }
        }
    }
    vector<string> letterCasePermutation(string S) {
        if(S.size() == 0) {
            ans.push_back("");
            return ans;
        }
        permute(0,S);
        return ans;
    }
};