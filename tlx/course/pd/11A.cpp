#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    int x, jumlah = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        jumlah += x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << jumlah - a[i] << endl;
    }
}
