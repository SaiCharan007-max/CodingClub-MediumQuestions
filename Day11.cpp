class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxm = INT_MIN, curr_sum = 0;
        for(int x : nums) {
            curr_sum += x;
            maxm = max(maxm, curr_sum);
            if(curr_sum < 0)
                curr_sum = 0;
        }
        return maxm;
    }
};
