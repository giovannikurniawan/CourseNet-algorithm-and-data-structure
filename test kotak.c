#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int j;
	int n = 5;
	 
	for (i=0; i<n; i++){     //repitition
		
		for (j=0; j<n; j++){   //
			if (i == 0 || j == 0 || i == 4 || j==4){
				printf("* ");
				}
			
			else{
				printf("  ");
				
			}
		}
		printf("\n");
		
	}
	return 0;
}
