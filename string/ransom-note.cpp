class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r[26],m[26];
        memset(r,0,sizeof(r));
        memset(m,0,sizeof(m));
        for(int i = 0;i < magazine.size();i++) {
        	m[magazine[i]-'a']++;
        }
        for(int i = 0;i < ransomNote.size();i++) {
        	r[ransomNote[i]-'a']++;
        }
        bool flag = true;
        for(int i = 0;i < 26;i++) {
        	if(r[i] > m[i]) {
        		flag = false;
        		break;
        	}
        }
        return flag;
    }
};