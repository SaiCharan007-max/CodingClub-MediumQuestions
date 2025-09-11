#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int> &array, int low, int mid, int high)
{
    int i = low, j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp.push_back(array[i++]);
        else
            temp.push_back(array[j++]);
    }

    while (i <= mid)
        temp.push_back(array[i++]);
    while (j <= high)
        temp.push_back(array[j++]);
    
    for(int idx = 0; idx < temp.size(); idx++)
        array[low+idx] = temp[idx];
    return;
}

void mergeSort(vector<int> &array, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid+1, high);
        merge(array, low, mid, high);
    }
}


int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    mergeSort(arr, 0, arr.size()-1);
    for (int x : arr) 
        cout << x << " ";
    return 0;
}
