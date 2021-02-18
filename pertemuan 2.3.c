#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int j;
	int n = 5;
	// repitition
	for (i=0; i<2; i++){       //baris jadi 2
		
		for (j=0; j<10; j++){   //mengubah kolom jadi 10 
			printf("* ");
		}
		printf("\n");
		
	}
	return 0;
}
