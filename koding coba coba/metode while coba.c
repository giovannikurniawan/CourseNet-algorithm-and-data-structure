#include <stdio.h>

int main()
{
	int angka = 19, penambah = 8, pengulangan = 5;
	
	while (pengulangan >=1 )
	{
		printf("%d ",angka);
		
		angka = angka + penambah;
		
		penambah--;
		pengulangan--;
	}
	return 0;
}
