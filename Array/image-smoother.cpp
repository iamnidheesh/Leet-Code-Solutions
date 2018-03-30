class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int row[] = {1,1,1,-1,-1,-1,0,0};
        int col[] = {-1,0,1,-1,0,1,-1,1};
        vector <vector<int> > backup ((int)M.size());
        for(int i = 0;i < M.size();i++) {
        	backup[i] = M[i];
        }
        for(int i = 0;i < backup.size();i++)
        	for(int j = 0;j < backup[0].size();j++) {
        		int sum = M[i][j],ct = 1;
        		for(int k = 0;k < 8;k++)
        			for(int l = 0;l < 8;l++) {
        				int r = i+row[k],c = j+col[l];
        				if(r >= 0 && r < backup.size()
        				&& c >= 0 && c < backup[0].size()) {
        					sum += backup[r][c];
                            ct++;
                        }
        			}
        		M[i][j] = sum/ct;
        	}
    return M;
    }
};