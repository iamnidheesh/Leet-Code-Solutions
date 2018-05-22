// sorting everytime is necessary since, order gets 
//disturbed everytime
// priority_queue may have been used , but very small
// array to sort , so its fine.
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int a[26];
        memset(a,0,sizeof(a));
        for(int i = 0;i < tasks.size();i++)
        	a[tasks[i]-'A']++;
        sort(a,a+26,greater<int> ());
        int idle = 0,uniq,prevUniq;
       	while(1) {
       		uniq = 0;
       		for(int i = 0;i < 26;i++) {
       			if(a[i]) {
       				uniq++;
       				a[i]--;
       				if(uniq > n)
       					break;
       			}
       		}
       		if(!uniq) {
               idle -= n - prevUniq + 1;
       			break;
            }
            prevUniq = uniq;
       		idle += n - uniq + 1;
            sort(a,a+26,greater<int> ());
       	}
        return tasks.size() + idle;
    }
};