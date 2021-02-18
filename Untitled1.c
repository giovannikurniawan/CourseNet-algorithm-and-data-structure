#include<stdio.h>
	int main(){
		int a = 5;
		int b= 5;
		char c[20];
		
		printf("masukkan angka: ");
		scanf("%d", &b); fflush(stdin); 
		
		printf("masukkan nama: ");
		scantf("%[^\n]", c);fflush(stdin);
		
		printf("nama kamu adalah %s, dan angka kamu adalah %d", c,b);

 	return 0;
	}

	


