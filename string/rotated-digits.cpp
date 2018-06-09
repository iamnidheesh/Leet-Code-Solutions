class Solution {
public:
	void check(string k) {
		bool flag = false;
		for(int i = 0;i < k.size();i++) {
			if(k[i] == '6' || k[i] == '9' ||
			k[i] == '2' || k[i] == '5') {
				flag = true;
			}
			if(k[i] == '3' || k[i] == '4'
				k[i] == '7') {
				flag = false;
				break;
			}
		}
		return flag;
	}
    int rotatedDigits(int N) {
    	int ans = 0;
    	for(int i = 1;i <= N;i++) {
    		string k = to_string(i);
    		if(check(k))
    			ans++;
    	}
    	return ans;  
    }
};