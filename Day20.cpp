#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int longestConsecutive(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    unordered_set<int> s(nums.begin(), nums.end());
    int maxm = 1;

    for (int n : s)
    {
        if (s.find(n - 1) == s.end())
        {
            int curr = n, len = 1;
            while (s.find(curr + 1) != s.end())
            {
                curr++;
                len++;
            }
            maxm = max(maxm, len);
        }
    }
    return maxm;
}
