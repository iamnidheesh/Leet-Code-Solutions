
class Solution {
public:
	
    string frequencySort(string s) {
        map <char,int> m;
        multimap <int,char> revMap;
        for(int i = 0;i < s.size();i++) {
        	m[s[i]]++;
        }
        for(auto i = m.begin();i != m.end();i++) {
            revMap.insert({i->second,i->first});
        }
        s = "";
        for(auto i = revMap.rbegin();i != revMap.rend();i++) {
            
            for(int k = 0;k < i->first;k++)
                s += i->second;
        }
        return s;
    }
};