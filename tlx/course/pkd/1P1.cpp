#include <bits/stdc++.h>
using namespace std;

void copyMatrix(int src[][100], int dest[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dest[i][j] = src[i][j];
        }
    }
}

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    
    int a[100][100], result[100][100];
    string cmd;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int k = 0; k < x; k++) {
        cin >> cmd;
        
        if (cmd == "|") { 
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    result[i][j] = a[i][m-1-j];
                }
            }
        }
        else if (cmd == "_") {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    result[i][j] = a[n-1-i][j];
                }
            }
        }
        else if (cmd == "90") {  
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = a[n-1-j][i];
                }
            }
            swap(n, m);
        }
        else if (cmd == "180") { 
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    result[i][j] = a[n-1-i][m-1-j];
                }
            }
        }
        else if (cmd == "270") {  
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = a[j][m-1-i];
                }
            }
            swap(n, m);
        }
        
        copyMatrix(result, a, n, m);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
