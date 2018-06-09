class Solution {
public:
	int x = 0,y = 0;
	void fillright(vector <int> &ans,vector<vector<int>>& matrix,int &count) {
		while(x < matrix.size() && y < matrix[0].size() && matrix[x][y] != INT_MIN) {
			count++;
			ans.push_back(matrix[x][y]);
			matrix[x][y] = INT_MIN;
          //  cout<<count<<endl;
			y++;
		}
        y--;
        x++;
	}
	void filldown(vector <int > &ans,vector<vector<int>>& matrix,int &count) {
		while(x < matrix.size() && y < matrix[0].size() && matrix[x][y] != INT_MIN) {
			count++;
			ans.push_back(matrix[x][y]);
			matrix[x][y] = INT_MIN;
           // cout<<count<<endl;
			x++;
		}
        x--;
        y--;
        
	}
	void fillleft(vector <int> &ans,vector<vector<int>>& matrix,int &count) {
		while(x < matrix.size() && y < matrix[0].size() && matrix[x][y] != INT_MIN) {
			count++;
			ans.push_back(matrix[x][y]);
			matrix[x][y] = INT_MIN;
            //cout<<count<<endl;
			y--;
		}
        y++;
        x--;
	}
	void fillup(vector <int > &ans,vector<vector<int>>& matrix,int &count) {
		while(x < matrix.size() && y < matrix[0].size() && matrix[x][y] != INT_MIN) {
			count++;
			ans.push_back(matrix[x][y]);
			matrix[x][y] = INT_MIN;
            //cout<<count<<endl;
			x--;
		}
        x++;
        y++;
	}
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        if(matrix.size() == 0)
            return ans;
        int count = 0;
        int k = matrix.size()*matrix[0].size();
        while(count < k) {
        	fillright(ans,matrix,count);
        	filldown(ans,matrix,count);
        	fillleft(ans,matrix,count);
        	fillup(ans,matrix,count);
        }
        return ans;
    }
};