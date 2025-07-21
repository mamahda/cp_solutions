#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,ans;
    scanf("%d", &a);
    while (a%2 == 0)
    {
        a /= 2;
    }
    if(a == 1){
        printf("ya");
    }else{
        printf("bukan");
    }
}
