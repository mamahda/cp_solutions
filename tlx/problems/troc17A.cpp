#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    long long n, a[101], b[101], ab[101], ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (ans % 2 == 0)
    {
        cout << "0";
    }else{
        cout << "1";
    }
}
