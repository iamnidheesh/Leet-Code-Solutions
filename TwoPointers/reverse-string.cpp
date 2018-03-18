class Solution {
public:
    string reverseString(string s) {
        int l = 0,h = s.size()-1;
        while(l < h) {
            char temp = s[l];
            s[l] = s[h];
            s[h] = temp;
            l++;
            h--;
        }
        return s;
    }
};