#include <bits/stdc++.h>

int main() {
	int a;
	scanf("%d", &a);
	if(a <= 10){
		printf("0");
	}else if(a >= 99){
		printf("9");
	}else{
		printf("%d", (a-9)/10);
	}
}
