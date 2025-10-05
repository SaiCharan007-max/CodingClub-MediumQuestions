class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) 
            prefix[i] = nums[i] + prefix[i-1];
        int count = 0;
        for(int i : prefix) {
            if(i == k)
                count ++;
            int complm = i-k;
            if(freq.find(complm) != freq.end())
                count += freq[complm];
            freq[i]++;
        }
        return count;
    }
};
