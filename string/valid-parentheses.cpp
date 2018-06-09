class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        bool flag = true;
        for(int i = 0;i < s.size();i++) {

        	if(s[i] == '{' || s[i] == '[' || s[i] == '(')
        		st.push(s[i]);
        	else {
        		if(st.size() != 0) {
        			if(st.top() == '{' && s[i] == '}')
        				st.pop();
        			else if(st.top() == '[' && s[i] == ']')
        				st.pop();
        			else if(st.top() == '(' && s[i] == ')')
        				st.top();
        			else {
        				flag = false;
        				break; 
        			}
        		}
        		else {
        			flag = false;
        			break;
        		}

        	}
        }
        if(st.size() != 0)
        	flag = false;
        if(flag)
			return true;
		else
			return false;
    }
};