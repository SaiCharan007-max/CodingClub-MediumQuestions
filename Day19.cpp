#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    int currmax = arr[n-1];
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] >= currmax) {
            ans.push_back(arr[i]);
            currmax = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    for(int x : leaders(arr))
        cout << x << ", ";
    cout << endl;
}
