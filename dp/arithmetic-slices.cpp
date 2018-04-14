class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
      
        int ans = 0;
        if(A.size() < 3)
            return ans;
        for(int i = 0;i < A.size()-2;i++) {
        	if(A[i] - A[i+1] == A[i+1] - A[i+2]) {
        		int j = i+1;
        		while(j < A.size()-2 && A[j] - A[j+1] == A[j+1] - A[j+2]) {
        			j++;
        		}
        		ans += j-i;
        	}
        }
        return ans;

    }
};