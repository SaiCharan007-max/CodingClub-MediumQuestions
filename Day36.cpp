class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c : s)
            freq[c]++;
        vector<pair<char, int>> nums(freq.begin(), freq.end());
        sort(nums.begin(), nums.end(), compare);
        string ans = "";
        for(auto x : nums)
            while(x.second > 0) {
                ans += x.first;
                x.second--;
            }
        return ans;

    }

    static bool compare(pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second;
    }
};
