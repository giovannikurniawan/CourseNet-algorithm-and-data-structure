#include<stdio.h>
#include<string.h>

int main()  {
	
	int i;
	int val=0;
	int angka[10] ={4,9,12,45,46,49,56,58,59,61};
	int jumlah = 10;
	int b=59;
	
	int low,mid,high;
	low = 0;
	high = jumlah-1;

	
	
	
		while(low<=high){
			mid = (low+high)/2;
			if(b== angka[mid]){
				val = 1;
				low = high+1;
			}
			else if(b> angka[mid]){
				low =mid+1;
			}
			else
			{
				high = mid -1;
			}
			
		}
	
	
	if(val==1){
		printf("Data ditemukan!!!");
	}
	else
	{
		printf("Data Tidak ditemukan");
	}
	
	
	
	
	
	return 0;
}
