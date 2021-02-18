#include <stdio.h>

int main(){

    int angka[10] = {3 ,6 ,8 ,2 ,1 ,0 ,7 ,9 ,5 , 4};
    int jumlahAngka = 10;
    int i;
    int j;
    int temp;
    int index;

    for (i = 0; i<jumlahAngka; i++){
        index = i;
        for(j = i; j<jumlahAngka; j++){

            if (angka[j] < angka[index]){
                index = j;
            }
        }
        if (angka[index] < angka [i]){
            temp = angka[index];
            angka[index] = angka[i];
            angka [i] = temp;

        }
    }
        for (i=0; i<10; i++){

        printf("%d\n", angka[i]);
        }

    return 0;
}
