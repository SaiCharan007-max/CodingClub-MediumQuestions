class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), compare);
        int curr_start = intervals[0][0];
        int curr_end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] <= curr_end)
                curr_end = max(curr_end, intervals[i][1]);
            else {
                ans.push_back({curr_start, curr_end});
                curr_start = intervals[i][0];
                curr_end = intervals[i][1];
            }
        }
        ans.push_back({curr_start, curr_end});
        return ans;
    }

    static bool compare(vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }
};
