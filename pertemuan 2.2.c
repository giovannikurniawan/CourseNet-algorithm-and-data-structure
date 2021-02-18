#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int j;
	int n = 5;
	
	for (i=0; i<n; i++){     //repitition
		
		for (j=0; j<3; j++){   //mengubah kolom jadi 3 baris 5 
			printf("* ");
		}
		printf("\n");
		
	}
	return 0;
}
