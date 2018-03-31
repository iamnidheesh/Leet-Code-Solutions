class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] != 9) {
        	digits[n-1] += 1;
        	return digits;
        }
        else {
        	bool flag = true;
        	for(int i = 0;i < digits.size();i++) {
        		if(digits[i] != 9) {
        			flag = false;
        			break;
        		}
        	}
        	if(flag) {
        		digits.clear();
        		digits.push_back(1);
        		for(int i = 0;i < n;i++)
        			digits.push_back(0);
        		return digits;
        	}
        	else {
        		int x = n-1;
        		while(digits[x] == 9) {
        			digits[x] = 0;
        			x--;
        		}
        		digits[x] += 1;
        		return digits;
        	}
        }
    }
};