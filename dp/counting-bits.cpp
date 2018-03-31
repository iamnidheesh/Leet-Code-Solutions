class Solution {
public:
    vector<int> countBits(int num) {
    	vector <int> v;
    	v.push_back(0);
    	for(int i = 1;i <= num;i++) {
    		if(i^2 == 2) {
    			v.push_back(1);
    		}
    		else if(i&1) {
    			v.push_back(v[i-1]-1);
    		}
    		else {
    			v.push_back(v[i-1]+1);
    		}
    	}
    	return v;  
    }
};