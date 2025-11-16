#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string k;
        cin >> k;
        int n = k.size();

        bool allNine = true;
        for (char c : k) {
            if (c != '9') {
                allNine = false;
                break;
            }
        }
        if (allNine) {
            cout << "1";
            for (int i = 0; i < n - 1; i++) cout << "0";
            cout << "1" << endl;
            continue;
        }

        string s = k;
        for (int i = 0; i < n / 2; i++) {
            s[n - 1 - i] = s[i];
        }

        if (s > k) {
            cout << s << endl;
            continue;
        }

        int carry = 1;
        int mid = (n - 1) / 2;

        for (int i = mid; i >= 0 && carry; i--) {
            int digit = (s[i] - '0') + carry;
            carry = digit / 10;
            s[i] = (digit % 10) + '0';
        }

        if (carry) {
            cout << "1";
            for (int i = 0; i < n - 1; i++) cout << "0";
            cout << "1" << endl;
        } else {
            for (int i = 0; i < n / 2; i++) {
                s[n - 1 - i] = s[i];
            }
            cout << s << endl;
        }
    }
    return 0;
}
