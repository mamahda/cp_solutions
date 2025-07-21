#include <iostream>
#include <math.h>

int a,b,i;

int main(){
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		if(a % i == 0){
			b++;
		}
	}
	if(b == 5){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}

