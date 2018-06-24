class Solution {
public:
    bool isHappy(int n) {
         
        int ct = 0;
        while(1) {
            ct++;
            int x = n;
            n = 0;
            while(x) {
                n += (x%10)*(x%10);
                x /= 10;
            }
            if(ct == 20 || n == 1)
                break;
        }
        if(n == 1)
            return true;
        else
            return false;
    }
};