class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int left = 0, right = nums.size()-1;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(nums[left] < nums[right])
                return nums[left];
            if(right-left+1 == 2)
                return nums[left] < nums[right] ? nums[left] : nums[right];
            else if(nums[mid] < nums[right])
                right = mid;
            else
                left = mid;
        }
        return -1;
    }
};
