class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0,contL = 0;
        bool flag = true;
       	int i = 0;
       	while(i < s.size()) {
       		if(s[i] == 'A') {
       			countA++;
	       		if(countA > 1) {
	       			flag = false;
	       			break;
	       		}
	       		i++;
	       		continue;
	       	}
	       	else if(s[i] == 'L') {
	       		while(i < s.size() && s[i] == 'L') {
	       			contL++;
	       			i++;
	       			if(contL > 2) {
	       				flag = false;
	       				break;
	       			}
	       		}
	       		if(!flag)
	       			break;
	       		contL = 0;
       		}
       		else
       			i++;
       	}
       	return flag;
    }
};