#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned ll n, a, b, i, j;

int main() {
    cin >> n;
    a = 1;b = n;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            j = n / i;
            a = i;b = j;
        }
    }
    cout << a << " " << b;
}

