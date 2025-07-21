#include <iostream>
using namespace std;

int checkface(const string &s) {
    if (s == "Tetrahedron") return 4;
    if (s == "Cube") return 6;
    if (s == "Octahedron") return 8;
    if (s == "Dodecahedron") return 12;
    if (s == "Icosahedron") return 20;
    return 0;
}

int main() {
    int n, sum = 0;
    cin >> n;
    string s;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        sum += checkface(s);
    }
    
    cout << sum << endl;
    return 0;
}

