#include <stdio.h>
#include <string.h>

int main ()
{
	int a;
	int b;
	int n = 5;
	
	for (a = 2; a < n; a++ )
	{
		for (b = 2; b < n; b++)
		{
			if (a == 0 ||b == 0 || a == 4 || b == 4)
			{
				printf ("* ");
			}
			else 
			{
				printf ("  ");
			}
		}
				printf ("\n");
	}
		return 0;
}
