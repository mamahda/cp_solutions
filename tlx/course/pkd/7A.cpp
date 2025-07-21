#include <bits/stdc++.h>
using namespace std;

int pecahanKoin[503];
int memo[50004];
int n, k;

int dp(int sisaUang){
    if(sisaUang == 0) return 0;
    if(sisaUang < 0) return 100000003;
    if(memo[sisaUang] != -1) return memo[sisaUang];
    
    int hasilDP = 100000003;
    
    for(int i = 0; i < n; i++){
        int kaloTukerPakeKoinKeI = dp(sisaUang - pecahanKoin[i]) + 1;
        hasilDP = min(hasilDP, kaloTukerPakeKoinKeI);
    }
    
    memo[sisaUang] = hasilDP;
    return hasilDP;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> pecahanKoin[i];
    }
    cin >> k;
    memset(memo, -1, sizeof memo);
    int hasil = dp(k);
    if(dp(k) >= 100000003){
        hasil = -1;
    }
    cout << hasil << endl;
}
