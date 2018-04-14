class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() == 1)
        	return true;
        bool flag = true;
        int type = 0;
        if(isupper(word[0])) {
        	if(isupper(word[1]))
        		type = 1;
        	else
        		type = 3;
        }
        else {
        	type = 2;
        }
        for(int i = 1;i < word.size();i++) {
        	if(type == 1 && !isupper(word[i]) ) {
        		flag = false;
        		break;
        	}
        	else if(type == 2 && !islower(word[i])) {
        		flag = false;
        		break;
        	}
        	else if(type == 3 && !islower(word[i])) {
        		flag = false;
        		break;
        	}
        }
        return flag;
    }
};