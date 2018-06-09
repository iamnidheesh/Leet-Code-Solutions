class Solution {
public:
	int x = 0,y = 0;
	void fillright(vector <vector<int> > &ans,int &count) {
		while(x < ans.size() && y < ans.size() && !ans[x][y]) {
			count++;
			ans[x][y] = count;
          //  cout<<count<<endl;
			y++;
		}
        y--;
        x++;
	}
	void filldown(vector <vector<int> > &ans,int &count) {
		while(x < ans.size() && y < ans.size() && !ans[x][y]) {
			count++;
			ans[x][y] = count;
           // cout<<count<<endl;
			x++;
		}
        x--;
        y--;
        
	}
	void fillleft(vector <vector<int> > &ans,int &count) {
		while(x < ans.size() && y < ans.size() && !ans[x][y]) {
			count++;
			ans[x][y] = count;
            //cout<<count<<endl;
			y--;
		}
        y++;
        x--;
	}
	void fillup(vector <vector<int> > &ans,int &count) {
		while(x < ans.size() && y < ans.size() && !ans[x][y]) {
			count++;
			ans[x][y] = count;
            //cout<<count<<endl;
			x--;
		}
        x++;
        y++;
	}
    vector<vector<int>> generateMatrix(int n) {
        vector <vector <int> > ans(n);
        for(int i = 0;i < ans.size();i++) {
        	ans[i].resize(n);
        }
        int count = 0;
        while(count < n*n) {
        	fillright(ans,count);
        	filldown(ans,count);
        	fillleft(ans,count);
        	fillup(ans,count);
        }
        return ans;
    }
};