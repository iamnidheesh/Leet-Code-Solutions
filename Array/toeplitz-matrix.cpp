class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        vector <int> temp;
        bool flag = true;
        for(int i = 1;i < matrix.size();i++) {
        	temp = matrix[i-1];
        	for(int j = 1;j< matrix[0].size();j++) {
        		if(temp[j-1] != matrix[i][j]) {
        			flag = false;
        			break;
        		}
        	}
        	if(!flag)
        		break;
        }
        return flag;
    }
};