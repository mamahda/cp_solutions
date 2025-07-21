#include <stdio.h>

int a,b,c,win;

int main() {
	scanf("%d %d %d", &a, &b, &c);
	win = 4 * (a + b + c) / 7;
	if( a == win || b == win  || c == win){
		printf("YA\n");
	}else{
		printf("TIDAK\n");
	}
}
