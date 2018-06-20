class Solution {
public:
    string mul(string num,int k) {
        int carry = 0;
        string ans = "";
        for(int i = num.size()-1;i >= 0;i--) {
            int data = carry + (num[i]-'0')*k;
            carry = data/10;
            ans += to_string(data%10);
        }
        if(carry)
            ans += to_string(carry);
        reverse(ans.begin(),ans.end());
        if(ans[0] == '0')
            ans = "0";
        return ans;
    }
    string add(string num1,string num2) {
         int a = num1.size()-1;
        int b = num2.size()-1;
        int carry = 0;
        string ans = "";
        while(a >= 0 || b >= 0) {
            if(a >= 0 && b >= 0) {
                int data = carry + num1[a]-'0' + num2[b] - '0';
                carry = data/10;
                ans += to_string(data%10);
                a--;
                b--;
            }
            else if(a >= 0) {
                int data = carry + num1[a] - '0';
                carry = data/10;
                ans += to_string(data%10);
                a--;
            }
            else {
                 int data = carry + num2[b] - '0';
                 carry = data/10;
                ans += to_string(data%10);
                b--;
            }
        
        }
        if(carry == 1)
            ans += "1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string multiply(string num1, string num2) {
        string ans = "0";
        string zero = "";
        for(int i = num2.size()-1;i >= 0;i--) {
            string m = mul(num1,num2[i]-'0');
            if(m == "0")
                ans = add(ans,m);
            else
                ans = add(ans,m+zero);
            zero += "0";
        }
        return ans;
    }
};