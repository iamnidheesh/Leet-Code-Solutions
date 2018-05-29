class Solution {
public:
    bool isPerfectSquare(int num) {
        vector <int> v;
        for(int i = 1;i*i <= INT_MAX;i++) {
        	if(num == i*i);
        		return true;
        }
        return false;
        
    }
};