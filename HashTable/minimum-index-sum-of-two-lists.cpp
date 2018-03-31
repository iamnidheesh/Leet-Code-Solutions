class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        set <string> s1;
        map<string,int> m;
        vector <string> ans;
        int indexsum = 2000;
        for(int i = 0;i < list1.size();i++)
        	s1.insert(list1[i]),m[list1[i]] = i;
      	
        for(int i = 0;i < list2.size();i++)
        	if(s1.find(list2[i]) != s1.end())
   				indexsum = min(indexsum,i+list1[i]);

   		 for(int i = 0;i < list2.size();i++)
        	if(s1.find(list2[i]) != s1.end() && (i+list1[i]) == indexsum)
   				ans.push_back(list2[i]);

        return ans;
    }
};