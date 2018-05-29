class Solution {
public:
	int check(long long int num,long long int x) {
		if(num*num < x) {
			return -1;
		}
		else
			return 1;
	}
    int mySqrt(int x) {
    	long long int low = 1,high = INT_MAX,mid;
    	while(low < high) {
    		mid = low + (high-low+1)/2; // avoids infinite loop
    		if(check(mid,x) == -1) {
    			low = mid;
    		}
    		else {
    			high = mid-1;
    		}
    	}
    	return low;
    }
};