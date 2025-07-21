#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int alas = 1213;
    int tinggi = 1619;

    double luas = (double) alas * tinggi / 2;
    cout << fixed << setprecision(1) << luas << endl;
}

