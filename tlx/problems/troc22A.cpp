#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	string n;
	int ans = 0;
	cin >> n;
	for(int i = 0; i<n.size();i++){
		if(n[i]=='0'){
			ans++;
		}
	}
	if(ans >= 1){
		printf("YES");
	}else{
		printf("NO");
	}
}

