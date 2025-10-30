class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int top = 0, bottom = nums.size()-1;
        while(top <= bottom) {
            int mid = top + (bottom-top)/2;

            if(target >= nums[mid][0] && nums[mid][(nums[mid].size()-1)] >= target)
                return binary(nums[mid], target);
            else if(target < nums[mid][0])
                bottom = mid-1;
            else
                top = mid+1;
        }
        return false;
    }

    bool binary(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while(left <= right) {
            int mid = left+(right-left)/2;
            if(nums[mid] == target)
                return true;
            else if(nums[mid] < target) 
                left = mid+1;
            else
                right = mid-1;
        }
        return false;
    }
};
