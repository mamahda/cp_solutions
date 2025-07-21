#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a, b, k, x;

int fungsi(int x){
    return abs(a * x + b);

}

int main(){
    scanf("%d %d %d %d", &a, &b, &k, &x);
    int y = fungsi(x);

    for (int i = 1; i < k; i++)
    {
        y = fungsi(y);
    }
    printf("%d", y);
}
