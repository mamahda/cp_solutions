#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];

        if (m == 1) {
            cout << n - (a[0] - 1) << "\n";
            continue;
        }

        bool strictlyInc = true;
        for (int i = 1; i < m; i++) {
            if (a[i] <= a[i-1]) {
                strictlyInc = false;
                break;
            }
        }

        if (strictlyInc) {
            if (a[0] == 1)
                cout << n - (m - 1) << "\n";
            else
                cout << n - a[m-1] + 1 << "\n";
        } else {
            cout << 1 << endl;
        }
    }
}

