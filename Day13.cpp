class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int j = 0, k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0) {
                temp[(n / 2)+ k] = nums[i];
                k++;
            } else
                temp[j++] = nums[i];
        }
        k = 0, j = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                nums[i] = temp[j++];
            else {
                nums[i] = temp[(n / 2)+ k];
                k++;
            }

        }
        return nums;
    }
};
