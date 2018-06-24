class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n) {
            n--;
            char c = (n%26 + 'A');
            ans += c;
            n /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};