#include <stdio.h>

int main(){

    int angka[10] = {};
    int jumlahAngka = 0;
    int i;
    int j;
    int temp;

    for (i = 0; i < jumlahAngka; i++){

        for (j = jumlahAngka-1; j<0; j--){

            if(angka[j]< angka[j-1]){
                temp = angka[j-1];
                angka[j] = angka [j-1];
                angka [j-1] = temp;
            }
        }
    }
for(i=0; i<10; i++){

    printf("%d\n", angka[i]);
}
    return 0;
}
