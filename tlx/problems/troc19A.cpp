#include <bits/stdc++.h> 

int main(){
	int p,q;
	scanf("%d %d", &p, &q);
	int ans = pow(p,2)+pow(q,2)+1;
	if (ans % 4 == 0){
		ans = ans / 4;
		printf("%d", ans);
	}else{
		printf("-1");
	}
	return 0;
