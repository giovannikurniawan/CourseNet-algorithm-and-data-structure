#include <stdio.h>

int main()
{
	int irow,icolumn,n;
	
	printf("masukan angka = ");
	scanf ("%d",&n);
	
	for(irow = n ; irow > 0 ; irow--)
	{
		for(icolumn = irow ; icolumn > 0; icolumn--)
		{
			printf("*");
		}
			printf("\n");
	}
	return 0;
}
