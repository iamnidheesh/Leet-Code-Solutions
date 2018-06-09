class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
    	
    	map <string,int> freq;
    	string s;
    	int i = 0;
    	while(i < paragraph.size()){
    		s = "";
    		while(i < paragraph.size() && !isalpha(paragraph[i]))
    			i++;
    		while(i < paragraph.size() && isalpha(paragraph[i])) {
    			s += tolower(paragraph[i]);
    			i++;
    		}
    		freq[s]++;
    		while(i < paragraph.size() && !isalpha(paragraph[i]))
    			i++;
    	}
    	string ans = "";
    	int maxhit = 0;
    	for(auto i = freq.rbegin();i != freq.rend();i++) {
    		bool found = false;
    		for(int k = 0;k < banned.size();k++) {
    			if(i->first == banned[k]) {
    				found = true;
    				break;
    			}
    		}
    		if(!found && i->second > maxhit)
    			maxhit = i->second , ans = i->first;
    			
    	}
    	return ans;
    }
};