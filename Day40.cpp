class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = lower_bound(nums, target);
        if(start == -1)
            return {-1, -1};
        
        int last = upper_bound(nums,target);

        return {start, last};
        
    }

    int lower_bound(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int idx = -1;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(nums[mid] == target) {
                idx = mid;
                right = mid-1;
            }
            else if(nums[mid] < target) 
                left = mid+1;
            else
                right = mid-1;
        }
        return idx;
    }

    int upper_bound(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int idx = -1;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(nums[mid] == target) {
                idx = mid;
                left = mid+1;
            }
            else if(nums[mid] < target) 
                left = mid+1;
            else
                right = mid-1;
        }
        return idx;
    }
};
