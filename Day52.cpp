class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size())
            return -1;
        int left = *min_element(arr.begin(), arr.end());
        int right = accumulate(arr.begin(), arr.end(), 0);
        int ans = left;
        
        while(left <= right) {
            int mid = left+(right-left)/2;
            if(isPossible(mid, arr, k)) {
                ans = mid;
                right= mid-1;
            }
            else
                left = mid+1;
            
        }
        return ans;
    }
    
    bool isPossible(int mid, vector<int>& nums, int k){
        int papers = 1;
        int temp = mid;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > mid)
                return false;
            else if(nums[i] <= temp) 
                temp -= nums[i];
            else {
                papers++;
                temp = mid-nums[i];
            }
            
        }
        return papers <= k;
    }
};
