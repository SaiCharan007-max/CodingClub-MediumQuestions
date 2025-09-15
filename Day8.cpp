#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> indices;
    for(int i = 0 ; i < nums.size(); i++) {
        int compliment = target - nums[i];
        if(indices.find(compliment) != indices.end())
            return {i, indices[compliment]};
        else
            indices[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    cout << twoSum(nums, target)[0] << ", " << twoSum(nums, target)[1] << endl;
}
