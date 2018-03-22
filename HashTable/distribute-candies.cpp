class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set <int> s;
        for(int i = 0;i < candies.size();i++) {
        	s.insert(candies[i]);
        }
        if(s.size() >= candies.size()/2)
        	return (int)candies.size()/2;
        else
        	return (int)s.size();
    }	
};