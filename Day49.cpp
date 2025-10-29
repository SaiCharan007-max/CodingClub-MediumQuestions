class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
        if(nums.size() == threshold)
            return right;
        int ans = right;
        while(left <= right) {
            int mid = left + (right -left)/2;
            int sum = 0;
            for(int i : nums)
                sum += ceil(double(i)/mid);
            if(sum <= threshold) {
                ans = mid;
                right = mid-1;
            }
            else
                left = mid+1;
        }
        return ans;
    }
};
