class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int goTill = arr[0];
        int ans = 0;
        for(int i = 0;i < arr.size();i++) {
        	if(arr[i] > goTill)
        		goTill = arr[i];
        	if(i == goTill)
        		ans++;  	
        }
        return ans;
    }
};