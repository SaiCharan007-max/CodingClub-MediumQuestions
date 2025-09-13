#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sieve(int target) {
    vector<bool> Prime(target+1, true);
    for(int i = 2; i <= target; i++) {
        if(Prime[i]) {
            cout << i << ",";
            for(int j = i*2; j <= target; j += i) {
                Prime[j] = false;
            }
        }
    }
}


int main() {
    int target;
    cout << "Enter Target" << endl;
    cin >> target;
    sieve(target);
}

