#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int j;
	int n = 5;
	
	for (i=0; i<n; i++){     //repitition
		
		for (j=0; j<i+1; j++){   //mengubah * menjadi segitiga siku siku
			printf("* ");
		}
		printf("\n");
		
	}
	return 0;
}
