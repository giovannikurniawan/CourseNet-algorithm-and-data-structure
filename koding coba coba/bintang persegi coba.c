#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	int b;
	int c;
	int n = 5;
	
	for(a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{ 
			 	for (c = 0; c < n; c++)
			 	{
			           if (a == 0 || b == 0)
			           {
			     	       printf("* ");
				       }
			    
				}	
		        
			}
				printf("\n");			
		}
	return 0;
}
