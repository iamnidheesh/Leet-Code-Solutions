class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector <int> color(graph.size());
        queue <int> q;
        for(int i = 0;i < graph.size();i++) {
        	if(color[i] == 0) {
        		q.push(i);
        		color[i] = 1;
        	}
        	int col;
        	while(!q.empty()) {
        		int front = q.front();
        		if(color[front] == 1)
        			col = 2;
        		else
        			col = 1;

        		q.pop();
        		for(int j = 0;j < graph[front].size();j++) {
        			if(!color[graph[front][j]]) {
        				color[graph[front][j]] = col;
                        q.push(graph[front][j]);
        			}
        			else if(color[graph[front][j]] == color[front]) {
        				return false;
        			}
        		}
        	}
        }
        return true;
    }
};