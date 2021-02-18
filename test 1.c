#include <stdio.h>


	
	/*int a =5;
	int b = 65;
	char c[20] ="Hello world";*/
	
	/*printf("halo\"");
	printf("%#x",b);//hexadecimal
	printf("%#o",b\n);//octal*/
	//printf("%.2f",b);// output 5.00
	//printf("%c", 65);// ascii mengeluarkan huruf A
	//printf("%c", b);
	//printf("%20s Hello2", c); rata kanan kata hello world
	//printf("%-20s Hello2", c); rata kiri kata hello world
	//putchar ('z');// print cuma 1 karacter
	/*puts(c);
	printf("test");*/ //sudah ada \n nya
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

	


