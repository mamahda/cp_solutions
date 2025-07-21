#include<stdio.h>

int main(){

	int bil1 = 0, bil2 = 0; 
	char simbol;

	scanf("%d %c %d", &bil1, &simbol, &bil2); 
	switch (simbol){
		case '+':
			printf("%d", bil1+bil2); 
			break;

		case '-':
			printf("%d", bil1-bil2); 
			break;

		case '*':
			printf("%d", bil1*bil2); 
			break;

		case '>':
			if(bil1>bil2){
			printf("benar"); 
			}else{
			printf("salah");
			}
			break;

		case '<':
			if(bil1<bil2){
			printf("benar"); 
			}else{
			printf("salah");
			}
			break;

		case '=' :
			if(bil1==bil2){
			printf("benar");
			}else{
			printf("salah");
			} 
			break;
	}
}
