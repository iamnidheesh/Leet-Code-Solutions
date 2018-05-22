class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int a[101][101];
        if(!obstacleGrid[0][0])
            a[0][0] = 1;
        else
            a[0][0] = 0;
        
        for(int i = 1;i < m;i++)
            if(!obstacleGrid[i][0])
                a[i][0] = a[i-1][0];
            else
                a[i][0] = 0;
        for(int i = 1;i < n;i++)
            if(!obstacleGrid[0][i])
                a[0][i] = a[0][i-1];
            else
                a[0][i] = 0 ;

        for(int i = 1;i < m;i++)
            for(int j = 1;j < n;j++)
                if(!obstacleGrid[i][j])
                  a[i][j] = a[i-1][j] + a[i][j-1];
                else
                    a[i][j] = 0;
        return a[m-1][n-1];
    }
};