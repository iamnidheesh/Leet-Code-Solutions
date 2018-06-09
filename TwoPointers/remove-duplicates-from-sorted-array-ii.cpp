int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int k = 0;k < nums.size();k++)
        if (i < 2 || nums[k] > nums[i-2])
            nums[i++] = nums[k];
    return i;
}