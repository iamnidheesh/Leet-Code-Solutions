class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> prev;
        int i = 0;
        int sum = 0;
        while(i < ops.size()) {
            string c = ops[i];
     
    		if(c[0] == 'C') {
    			sum -= prev.top();
    			prev.pop();
    		}
    		else if(c[0] == 'D') {
    			sum += 2*prev.top();
    			prev.push(2*prev.top());
    		}
    		else if(c[0] == '+') {
    			int a = prev.top();
    			prev.pop();
    			int b = prev.top();
    			prev.push(a);
    			sum += a+b;
    			prev.push(a+b);
    		}
    		else {
    			int a = stoi(c);
        		sum += a;
        		prev.push(a);
        	}
        	
        	i++;
        }
        return sum;
    }
};