class Solution {
public:
	int check(long long int k,long long int n) {
		if((k*(k+1))/2 < n)
			return -1;
		else if((k*(k+1))/2 > n)
			return 1;
		else
			return 0;
	}
    int arrangeCoins(int n) {
        long long int low = 1,high = INT_MAX,mid;
        while(low < high) {
        	mid = low + (high-low)/2;
        	if(check(mid,n) == -1)
        		low = mid;
        	else if(check(mid,n) == 1) {
        		high = mid-1;
        	}
        	else
        		return mid;

        }
        return low;
    }
};