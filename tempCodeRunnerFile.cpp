#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
    int l, r;
    cin >> l >> r;
    int n = r-l+1;

    int sum =(l+r)*n/2;

    if (sum == 0) {
        cout << 0 << '\n';
    }
    else {
        cout << r - l << '\n';
    }
}

return 0;

}