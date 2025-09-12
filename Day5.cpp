#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int> &nums, int low, int high) {
    int pivot = nums[high];
    int i = low-1;
    for(int j = low; j < high; j++) {
        if(nums[j] <= pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[high], nums[++i]);
    return i;
}

void quickSort(vector<int> &array, int low, int high) {
    if(low < high) {
        int pivot = partition(array, low, high);
        quickSort(array, low, pivot-1);
        quickSort(array, pivot+1, high);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    quickSort(arr, 0, arr.size()-1);
    for (int x : arr) 
        cout << x << " ";
    return 0;
}

