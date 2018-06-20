class Solution {
public:
	string previous(string x,int pos) {

		if(x[pos] == '0')
			x[pos] = '9';
		else
			x[pos] -= 1;
        return x;
	}
	string nextele(string x,int pos) {

		if(x[pos] == '9')
			x[pos] = '0';
		else
			x[pos] += 1;
		return x;
	}
    int openLock(vector<string>& deadends, string target) {
        
        queue <string> q;
        map <string,int> m;
        
        for(int i = 0;i < deadends.size();i++) {
        	m[deadends[i]] = -1;
        }
        
        if(m["0000"] != -1 && m[target] != -1) {
            q.push("0000");
            m["0000"] = 0;
        }
        
        while(!q.empty()) {

        	string front = q.front();
            q.pop();
        	
        	for(int i = 0;i < 4;i++) {
	        	string prev = previous(front,i);
	        	string next = nextele(front,i);
                if(prev == target || next == target) {
                    return m[front]+1;
                }
	        	if(m[prev] == 0) {
	        		m[prev] = 1 + m[front];
	        		q.push(prev);
	        	}
	        	if(m[next] == 0) {
	        		m[next] = 1 + m[front];
	        		q.push(next);
	        	}
        	}
        }
        return -1;
    }
};