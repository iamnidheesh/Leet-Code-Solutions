class Solution {
public:
    vector<int> partitionLabels(string S) {
        int lastOcc[26];
        memset(lastOcc,0,sizeof(lastOcc));
        for(int i = S.size()-1;i >= 0;i--) {
        	if(lastOcc[S[i]-'a'] == 0)
        		lastOcc[S[i]-'a'] = i;
        }
        int i = 0,ct,lastIndex;
        vector <int> ans;
        while(i < S.size()) {
        	lastIndex = lastOcc[S[i]-'a'];
        	ct = 0;
        	while(i <= lastIndex) {
        		if(lastOcc[S[i]-'a'] > lastIndex)
        			lastIndex = lastOcc[S[i]-'a'];
        		ct++;
        		i++;
        	}
        	ans.push_back(ct);
        }
        return ans;
    }
};