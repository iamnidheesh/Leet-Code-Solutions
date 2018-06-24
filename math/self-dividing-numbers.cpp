class Solution {
public:
    bool isSelf(int x) {
        
        int num = x;
        bool flag = true;
        while(x) {
            if(x%10 == 0 || num%(x%10) != 0) {
                flag = false;
                break;
            }
            x /= 10;
        }
        return flag;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector <int> ans;
        for(int i = left;i <= right;i++) {
            if(isSelf(i))
                ans.push_back(i);
        }
        return ans;
    }
};