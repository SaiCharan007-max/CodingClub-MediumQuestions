#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++) {
        int curr = nums[i];
        int j = i-1;
        while(j >= 0 && nums[j] > curr) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = curr;
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    insertionSort(arr);
    for (int x : arr) 
        cout << x << " ";
    return 0;
}
