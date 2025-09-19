class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxm = 0, least = INT_MAX;
        for(int x : prices) {
            if(x < least) {
                least = x;
                continue;
            }
            maxm = max(maxm, x - least);
        }
        return maxm;
    }
};
