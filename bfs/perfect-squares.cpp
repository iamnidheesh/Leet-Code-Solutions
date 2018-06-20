class Solution {
public:
    int numSquares(int n) {
        
        vector <int> sq;
        for(int i = 1; i*i <= n;i++ ) {
        	sq.push_back(i*i);
        }
        vector <int> vis(n+1);
        queue <int> q;
        q.push(n);
        vis[n] = 0;
        while(!q.empty()) {

        	int front = q.front();
        	q.pop();
            if(front == 0) {
                return vis[front];
            }
        	for(auto i = sq.begin(); i != sq.end();i++) {
        		if(front - *i >= 0 && !vis[front - *i]) {
        			vis[front - *i] = 1 + vis[front];
        			q.push(front - *i);
        		}  
        	}
        }
    }
};