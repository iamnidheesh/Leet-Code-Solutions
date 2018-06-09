class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0,j = 0;
        while(i < chars.size()) {
        	chars[j] = chars[i];
        	i++;
        	int count = 1;
        	while(i < chars.size() && chars[i] == chars[j]){
        		i++;
        		count++;
        	}
        	j++;
        	if(count > 1) {
        		string ct = to_string(count);
        		for(int k = 0;k < ct.size();k++) {
        			chars[j] = ct[k];
        			j++;
        		}
        	}
        }
        return j;
    }
};