class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set <int> Jewels;
        int ans = 0;
        for(int i = 0;i < J.size();i++)
 			Jewels.insert(J[i]);
 		for(int i = 0;i < S.size();i++) 
 			if(Jewels.find(S[i]) != Jewels.end())
 				ans++;
 		return ans;
    }
};