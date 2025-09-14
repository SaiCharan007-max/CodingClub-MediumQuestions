#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nextGap(int gap) {
    if (gap <= 1) return 0;
    return (gap / 2) + (gap % 2);
}

void mergeArrays(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    int gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        int i, j;
        for (i = 0; i + gap < n; i++)
            if (a[i] > a[i + gap]) swap(a[i], a[i + gap]);

        for (j = (gap > n) ? (gap - n) : 0; i < n && j < m; i++, j++)
            if (a[i] > b[j]) swap(a[i], b[j]);

        if (j < m) {
            for (j = 0; j + gap < m; j++)
                if (b[j] > b[j + gap]) swap(b[j], b[j + gap]);
        }
    }
}

int main() {
    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 8, 13};
    mergeArrays(a, b);
    for (int x : a) 
      cout << x << " ";
    cout << endl;
    for (int x : b)
      cout << x << " ";
    cout << endl;
}
