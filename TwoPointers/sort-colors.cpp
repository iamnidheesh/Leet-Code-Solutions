// count sort .... two pass.
// come up with a one pass ...
class Solution {
public:
    void sortColors(vector<int>& nums) {
     int ct[3];
     ct[0] = 0,ct[1] = 0,ct[2] = 0;
     for(int i = 0;i < nums.size();i++)
     	ct[nums[i]]++;
     for(int i = 0;i < ct[0];i++)
     	nums[i] = 0;
     for(int i = ct[0];i < ct[0]+ct[1];i++)
     	nums[i] = 1;
     for(int i = ct[0]+ct[1]; i < ct[0]+ct[1]+ct[2];i++)
     	nums[i] = 2;
    }
};