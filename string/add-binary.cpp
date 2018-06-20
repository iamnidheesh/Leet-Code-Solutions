class Solution {
public:
    string addBinary(string a, string b) {
    
    	int i = a.size()-1;
    	int j = b.size()-1;
    	int carry = 0;
    	string ans = "";
    	while(i >= 0 || j >= 0) {
    		if(i >= 0 && j >= 0) {
    			if(carry == 0) {
    				if(a[i] == '0' && b[j] == '0')
    					ans += '0';
    				else if((a[i] == '0' && b[j] == '1' )||
    					(a[i] == '1' && b[j] == '0'))
    					ans += '1';
    				else if(a[i] == '1' && b[j] == '1')
    					ans += '0',carry = 1;

    			}
    			else {
    				if(a[i] == '0' && b[j] == '0')
    					ans += '1',carry = 0;
    				else if((a[i] == '0' && b[j] == '1' )||
    					(a[i] == '1' && b[j] == '0'))
    					ans += '0',carry = 1;
    				else if(a[i] == '1' && b[j] == '1')
    					ans += '1',carry = 1;
    			}
    			i--;j--;
    		}
    		else if(i >= 0) {
    			if(carry == 0) {
    				ans += a[i];
    			}
    			else {
    				if(a[i] == '0')
    					ans +='1',carry = 0;
    				else
    					ans += '0',carry = 1;
    			}
    			i--;
    		}
    		else {
    			
    			if(carry == 0) {
    				ans += b[j];
    			}
    			else {
    				if(b[j] == '0')
    					ans +='1',carry = 0;
    				else
    					ans += '0',carry = 1;
    			}
    			j--;
    		}
    		

    	}
    	if(carry == 1)
    		ans += '1';
    	reverse(ans.begin(),ans.end());
    	return ans;
    }
};