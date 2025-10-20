#include <iostream>

using namespace std;

int reverseInt(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int sum = reverseInt(a) + reverseInt(b);
        cout << reverseInt(sum) << endl;
    }
    return 0;
}

