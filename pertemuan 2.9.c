#include <stdio.h>
#include <string.h>

int main()
{
	struct buku{
		
		int jmlHalaman;
		char judul[20];
		
	};
	
	struct buku buku1;
	
	buku1.jmlHalaman = 3;
	strcpy(buku1.judul, "ini buku");//yang belakang masukkin ke depan 
	
	
	printf("%d \n", buku1.jmlHalaman);
	printf("%s",buku1.judul);
}
