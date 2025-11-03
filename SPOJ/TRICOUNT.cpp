#include <cstdio>
typedef long long ll;

int main() {
    ll t;
    scanf("%lld", &t);
    while (t--) {
        ll n;
        scanf("%lld", &n);
        printf("%lld\n", ((n * (n + 2) * (2 * n + 1)) / 8));
    }
    return 0;
}
