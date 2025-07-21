#include <bits/stdc++.h>
#include <string>
using namespace std;

string kalkulator(char op, vector<string> data) {
    long long n = 1;
    string ans;
    
    switch (op)
    {
    case '+':
        for (int i = 0; i < data.size(); i++)
        {
            n += stoi(data[i]);
        }
        n -= 1;
        ans = to_string(n);
        return ans;
    case '*':
        for (int i = 0; i < data.size(); i++)
        {
            n *= stoi(data[i]);
        }
        ans = to_string(n);
        return ans;
    }
    return "KESALAHAN";
}

//  Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}

