class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isPossible(mid, h, piles)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

    bool isPossible(int speed, int h, vector<int>& piles) {
        long long hours = 0;
        for (int bananas : piles) {
            hours += (bananas + speed - 1) / speed; 
            if (hours > h) return false;
        }
        return hours <= h;
    }
};
