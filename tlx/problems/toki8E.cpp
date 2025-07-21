#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main(){
	ll t,n,x,y,z;
	cin >> t;
	while(t--){
		cin >> n;
		x = (n/4+1) * (n/4) * 2;
		y = (n/7+1) * (n/7) * 7 / 2;
		z = (n/28+1) * (n/28) * 14;
		cout << x + y - z << endl;
	}
}
