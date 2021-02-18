#include <stdio.h>
#include <string.h>

int main()
{

	int i;
	int j;
	int n = 5;
	
	for (i=0; i<n; i++) 
	{
		for (j=0; j<n; j++)
	
		   if (i == 0 || j == 3)
	       {
			printf("* ");
	       }
	}
		printf("\n"); 
	return 0;
}


