class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size() == 1) {
        	return true;
        }
        int n = bits.size()-1;
        bool flag;
        for(int i = 0;i <= n;i++) {
        	if(bits[i] == 0)
        		flag = true;
        	else {
        		flag = false;
        		i++;
        	}
        }
        return flag;
    }
};