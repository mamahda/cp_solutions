#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll x, y, z, ans = 0;
    cin >> x >> y >> z;
    ans = x - (x * y /100);
    ans = ans + (ans * z /100);
    cout << ans;
}
