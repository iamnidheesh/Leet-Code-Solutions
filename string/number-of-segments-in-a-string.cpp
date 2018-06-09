class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        int i = 0;
        while(i < s.size()) {
            bool flag = false;
            while(i < s.size() && s[i] != ' ') {
                i++;
                flag = true;
            }
            if(flag)
                count++;
            else
                i++;
        }
        return count;
    }
};