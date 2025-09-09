#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0; i < n-1; i++) {
        for(int j=0; j < n-i-1; j++) {
            if(nums[j+1] < nums[j])
                swap(nums[j+1], nums[j]);
        }
    }
}
