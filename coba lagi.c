#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	int j; 
	int n  = 20;
	int bagi = 0;

	for (i=0; i<=n; i++)
	{
		for (j=1; j<=i; j++)
		{
			if (i%j == 0)
			{
				bagi++;
			}
		}
		if (bagi == 2)
		{
			printf("%d ", i);
		}
		bagi = 0;
	}
	return 0;
}
