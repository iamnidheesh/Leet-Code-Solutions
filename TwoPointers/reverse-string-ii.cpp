class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0;i < s.size();i+= 2*k) {
            int l = i,h = min(i+k-1,(int)s.size()-1);
            while(l < h) {
                char temp = s[l];
                s[l] = s[h];
                s[h] = temp;
                l++;
                h--;
            }
        }
        return s;
    }
};