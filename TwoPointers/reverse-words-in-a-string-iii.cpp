class Solution {
public:
    void rev(string &s,int l,int h) {
         while(l < h) {
                char temp = s[l];
                s[l] = s[h];
                s[h] = temp;
                l++;
                h--;
            }
    }
    string reverseWords(string s) {
        int l = 0;
        for(int i = 0;i < s.size();i++) {
            if(s[i] == ' ') {
                rev(s,l,i-1);
                l = i+1;
            }
            
        }
        rev(s,l,s.size()-1);
        return s;
    }
};