#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if(i % 3 == 0){
            cout << "a";
        }else if(i % 3 == 1){
            cout << "b";
        }else{
            cout << "c";
        }
    }
    
}
