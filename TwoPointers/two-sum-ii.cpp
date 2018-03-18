class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1,index2;
        vector <int> ans;
        for(int i = 0;i < numbers.size();i++) {
            int temp = numbers[i];
            numbers[i] = INT_MIN;
            auto it = lower_bound(numbers.begin(),numbers.end(),target-temp);
            if(*it == target-temp) {
                ans.push_back(1+min(i,(int)(it-numbers.begin())));
                ans.push_back(1+max(i,(int)(it-numbers.begin())));
                break;
            }
            numbers[i] = temp;
        }
        return ans;
    }
};