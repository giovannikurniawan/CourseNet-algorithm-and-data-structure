#include <stdio.h>

int main()
{
	int irow,icolumn,angka;
	
	printf("masukan angka :  ");
	scanf("%d",&angka);
	
	for(irow = angka; irow > 0; irow--)
		{
			for(icolumn = irow; icolumn > 0; icolumn--)
			 	{
			 		printf("*");
			    }
			    	printf("\n");
		}
			return 0;
}

