class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> ans;
        bool flag = false;
        for(int i = 0;i < numbers.size();i++) {
            int temp = numbers[i];
            numbers[i] = INT_MIN;
            for(int j = 0;j < numbers.size();j++) {
                if(numbers[j] == target-temp) {
                    flag = true;
                    ans.push_back(min(i,j));
                    ans.push_back(max(i,j));
                    break;
                }
            }
            if(flag)
                break;
            numbers[i] = temp;
        }
        return ans;
    }
};