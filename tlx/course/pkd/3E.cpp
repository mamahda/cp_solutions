#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,x,y;
    cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    while(q--)
    {
        cin >> x >> y;
        int l = upper_bound(arr,arr+n,x) - arr;
        int r = upper_bound(arr,arr+n,y) - arr;
        cout << r-l << endl;
    }
}
