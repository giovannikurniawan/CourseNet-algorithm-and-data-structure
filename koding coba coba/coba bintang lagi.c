#include <stdio.h>
#include <string.h>

int main()
{
	int irow, icolumn, n;
	
	printf("Masukan Angka = ");
	scanf("%d",&n);
	
	for (irow = n; irow > 0; irow--)
	{
		for (icolumn = irow; icolumn > 0; icolumn--)
		{
			printf("*");
			
		}
			printf("\n");
	}
	 return 0;
}
