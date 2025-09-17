#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int majorityElement(vector<int>& nums) {
    int curr_el = nums[0];
    int freq = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == curr_el)
            freq++;
        else{
            freq--;
            if(freq == 0) {
                curr_el = nums[i];
                freq = 1;
            }
        }
    }
    return curr_el;
}

int main() {
    vector<int> nums = {1, 3, 2, 2, 2, 2, 2, 1, 1};
    int ans = majorityElement(nums);
    cout << ans << endl;
}
