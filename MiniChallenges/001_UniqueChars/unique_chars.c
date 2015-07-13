#include <stdio.h>



main(){
    char sampleInput[] = "one";
    int len = sizeof(sampleInput);

    printf("%i = len \n", len);
    for(int i = 0; i < len; i++){
        printf("%c \n", sampleInput[i]);

    }



    printf("\n");
    



}
