#include <stdio.h>



main(){
    char sampleInput[] = "abcone";
    int len = sizeof(sampleInput);

    printf("%i = len \n", len);
    for(int i = 0; i < len -1 ; i++){
        int charValue  = (int)  sampleInput[i] - 97;
        printf("%c \n", sampleInput[i]);
        printf("%i \n", charValue);

    }



    printf("\n");
    



}
