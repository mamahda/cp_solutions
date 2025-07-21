#include <bits/stdc++.h>
using namespace std;

int prima(int a){
    if(a == 1){
        return 1;
    }else{
        for (int i = 2; i <= trunc(sqrt(a)); i++)
        {
            if(a % i == 0){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n, a, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ans = prima(a);
        if(ans == 1){
            cout << "BUKAN" << endl;
        }
        else{
            cout << "YA" << endl;
        }
    }
    
}

