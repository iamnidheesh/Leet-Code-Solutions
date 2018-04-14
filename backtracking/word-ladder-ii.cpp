class Solution {
public:
    vector <int> vis;
    vector <vector<string> > ans;
    vector <string> v;
    vector <string> words;
    vector <vector <int> > adj;
    string dest;
    int index;
    bool findPaths(int x) {
    	vis[x] = 1;
    	if(x == index) {
    		vis[index] = 0;
    		ans.push_back(v);
    		v.pop_back();
    		return true;
    	}
    	for(auto i : adj[x]) {
            if(!vis[i]) {
                v.push_back(words[i]);
                if(findPaths(i))
                    break;
            }
        }
    	v.pop_back();
    	vis[x] = 0;
        return false;
    }
  
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
    	dest = endWord;
    	words = wordList;
    	v.push_back(beginWord);
        vector <vector <string> > result;
        bool flag = false,flag1 = false;
        int start = 0;
        for(int i = 0;i < wordList.size();i++) {
    	    if(wordList[i] == dest) {
                flag = true;
                index = i;
            }
            if(wordList[i] == beginWord) {
                flag1 = true;
                start = i;
            }
        }
        if(!flag1) {
            wordList.push_back(beginWord);
            start = wordList.size()-1;
        }
        vis.resize(wordList.size());
        adj.resize(wordList.size());
        if(flag) {
            for(int i = 0;i < wordList.size();i++) {
                if(wordList[i] != dest)
                    if(dis(wordList[index],wordList[i]))
                        adj[i].push_back(index);
                    for(int j = 0;j < wordList.size();j++) {
                            if(wordList[j] != dest && dis(wordList[i],wordList[j]))
                                adj[i].push_back(j);
                    }
            }
            findPaths(start);
        }
        else
            return result;
    	int min_val = INT_MAX;
    	for(int i = 0;i < ans.size();i++) {
    		if(ans[i].size() < min_val)
    			min_val = ans[i].size();
    	}
    	for(int i = 0;i < ans.size();i++) {
    		if(ans[i].size() == min_val)
    			result.push_back(ans[i]);
    	}
        return result;
    }
    bool dis(string s,string p) {
    	bool flag = true;
    	int ct = 0;
    	for(int i = 0;i < s.size();i++) {
    		if(s[i] != p[i])
    			ct++;
    		if(ct > 1) {
    			flag = false;
    			break;
    		}
    	}
    	if(ct == 1)
    		return true;
    	else
    		return false;
    }
};