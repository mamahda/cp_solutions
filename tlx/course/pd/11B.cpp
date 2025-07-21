#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    ll jumlah = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        jumlah += x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << jumlah - a[i] << endl;
    }
}
