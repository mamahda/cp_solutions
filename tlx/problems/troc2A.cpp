#include <bits/stdc++.h>
using namespace std;

int main() {	
	int m,n,a,b,x,y;
	scanf("%d %d\n %d %d", &n,&m,&a,&b);
	x = (n/a) * (m/b);
	y = (n/b) * (m/a);
	if(y > x){
		printf("%d", y);
	}else{
		printf("%d", x);
	}
}
