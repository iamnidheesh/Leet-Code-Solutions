class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int a = num1.size()-1;
        int b = num2.size()-1;
        int carry = 0;
        string ans = "";
        while(a >= 0 || b >= 0) {
            if(a >= 0 && b >= 0) {
                int data = carry + num1[a]-'0' + num2[b] - '0';
                if(data >= 10) {
                    carry = 1;
                    ans += to_string(data%10);
                }
                else {
                    carry = 0;
                    ans += to_string(data);
                }
                a--;
                b--;
            }
            else if(a >= 0) {
                int data = carry + num1[a] - '0';
                if(data == 10) {
                    carry = 1;
                    ans += to_string(0);
                }
                else {
                    carry = 0;
                    ans += to_string(data);
                }
                a--;
            }
            else {
                 int data = carry + num2[b] - '0';
                if(data == 10) {
                    carry = 1;
                    ans += to_string(0);
                }
                else {
                    carry = 0;
                    ans += to_string(data);
                }
                b--;
            }
        
        }
        if(carry == 1)
            ans += "1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};