class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int leftidx = leftmost(arr, target);
        if(leftidx == -1)
            return 0;
        int rightidx = rightmost(arr, target);
        
        return rightidx-leftidx+1;
        
    }
    int leftmost(vector<int>& array, int target) {
        int left = 0, right = array.size()-1;
        int idx = -1;
        while(left <= right) {
            int mid = left+(right-left)/2;
            if(array[mid] == target) {
                idx = mid;
                right = mid-1;
            }
            else if(array[mid] < target)
                left = mid+1;
            else
                right = mid-1;
        }
        return idx;
    }
    int rightmost(vector<int>& array, int target) {
        int left = 0, right = array.size()-1;
        int idx = -1;
        while(left <= right) {
            int mid = left+(right-left)/2;
            if(array[mid] == target) {
                idx = mid;
                left = mid+1;
            }
            else if(array[mid] < target)
                left = mid+1;
            else
                right = mid-1;
        }
        return idx;
    }
};
