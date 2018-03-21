class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector <string> ans;
        set <char> s1,s2,s3;
        for(int i = 0;i < row1.size();i++)
        	s1.insert(row1[i]);
        for(int i = 0;i < row2.size();i++)
        	s2.insert(row2[i]);
        for(int i = 0;i < row3.size();i++)
        	s3.insert(row3[i]);
        for(int i = 0;i < words.size();i++) {
        	bool flag = true;
        	for(int j = 0;j < words[i].size();j++) {
        		if(row1.find(words[i][j]) != row1.end())
        			continue;
        		else {
        			flag = false;
        			break;
        		}
        	}
        	if(!flag)
        	for(int j = 0;j < words[i].size();j++) {
        		if(row2.find(words[i][j]) != row2.end())
        			continue;
        		else {
        			flag = false;
        			break;
        		}
        	}
        	if(!flag)
        	for(int j = 0;j < words[i].size();j++) {
        		if(row3.find(words[i][j]) != row3.end())
        			continue;
        		else {
        			flag = false;
        			break;
        		}
        	}
        	if(flag)
        		ans.push_back(words[i]);
        }
        return ans;

    }
};