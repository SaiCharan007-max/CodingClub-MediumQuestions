class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(nums[mid] == target)
                return true;
            else if(nums[mid] <= nums[right] && nums[mid] >= nums[left]) 
                return linear(nums,target, left, right);
            else if(nums[mid] <= nums[right]) {
                if(nums[mid] < target && target <= nums[right])
                    left = mid+1;
                else
                    right = mid-1;
            }
            else
                if(nums[left] <= target && target < nums[mid])
                    right = mid-1;
                else
                    left = mid+1;


        }
        return false;
    }

private:
    bool linear(vector<int>& nums, int target, int left, int right) {
        for(int i = left; i <= right; i++)
            if(nums[i] == target)
                return true;
        return false;
    }
};
