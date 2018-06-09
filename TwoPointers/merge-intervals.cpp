/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
    	sort(intervals.begin(),intervals.end());
    	int start = 0,end = 0;
    	vector <Intervals> ans;
    	for(int i = 1;i < intervals.size();i++) {
    		if(intervals[i].first <= intervals[i-1].second)
    			end++;
    		else {
    			Interval k = new Interval(interval[start].start,interval[end].end);
    			start = i,end = i;
    			ans.push_back(k);
    		}
    	}
    	ans.push_back(new Interval(interval[start].start,interval[end].end));
    	return ans;
    }
};