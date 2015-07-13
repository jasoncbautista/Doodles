#include <stdio.h>
#include <stdlib.h>

typedef int bool;

#define true 1
#define false 0


int main(){
    char sampleInput[] = "abcone";
    int len = sizeof(sampleInput);
    bool *seenBefore;
    int seenBeforeLen = 4;
    seenBefore = (bool*)  calloc(seenBeforeLen, sizeof(bool)  );
    


    printf("%i = len \n", len);
    for(int i = 0; i < len -1 ; i++){
        int charValue  = (int)  sampleInput[i] - 97;
        printf("%c \n", sampleInput[i]);
        printf("%i \n", charValue);
    }

    printf("\n");


    for(int j = 0; j < seenBeforeLen ; j++){
        printf("%i\n", seenBefore[j]);
    }

}



