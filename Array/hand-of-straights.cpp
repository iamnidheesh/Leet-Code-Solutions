class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
    	
    	if(hand.size()%W != 0)
    		return false;
    	else if(W == 1)
    		return true;

    	sort(hand.begin(),hand.end());
    	bool ans = true;
    	int index = 0;
    	int prev;
    	int i = 0;
    	while(i < hand.size()) {
    		int k = W-1;
    		prev = hand[index];
    		i = index + 1;
    		hand[index] = -2;
         //   cout<<prev<<" ";
    		index = -2;
    		while(k && i < hand.size()) {
    			if(hand[i] == prev+1) {
    				k--;
                   // cout<<hand[i]<<" ";
    				prev = hand[i];
    				hand[i] = -2;
    				i++;
    				continue;
    			}
    			else if(index == -2 && hand[i] != -2) {
    				index = i;
    			}
    			i++;
    		}
            cout<<endl;
    		if(k != 0) {
    			ans = false;
    			break;
    		}
    		if(index == -2)
    			index = i;
    	}
    	return ans;
    }
};