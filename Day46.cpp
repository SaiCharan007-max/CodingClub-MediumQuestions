class Solution {
public:
    bool isPossible(int num, int x) {
        return (long long)num*num <= x;
    }
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        int ans = 1;
        int left = 1, right = x/2;
        while(left <= right) {
            int mid = left+(right-left)/2;
            if(isPossible(mid, x)) {
                ans = mid;
                left = mid+1;
            }
            else
                right = mid-1;

        }
        return ans;
    }
};
