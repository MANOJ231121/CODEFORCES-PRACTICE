#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int height = 0;
    for (int i = 1; ; i++) {
        count += i * (i + 1) / 2;
        if (count > n) {
            break;
        }
        height++;
    }
    cout << height << endl;

    return 0;
}