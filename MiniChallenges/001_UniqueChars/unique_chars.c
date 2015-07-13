#include <stdio.h>
#include <stdlib.h>

typedef int bool;

#define true 1
#define false 0

bool hasDuplicateChars(char * sampleInput);
int print_bools(int seenBeforeLen, bool* seenBefore);

int main()
{
    char sampleInput[] = "abcaone";
    
    bool result = hasDuplicateChars(sampleInput);


}


bool hasDuplicateChars(char * sampleInput)
{

    int len = sizeof(sampleInput);
    bool *seenBefore;
    int seenBeforeLen = 300;
    seenBefore = (bool*)  calloc(seenBeforeLen, sizeof(bool)  );

    printf("%i = len \n", len);
    for(int i = 0; i < len -1 ; i++){
        int charValue  = (int)  sampleInput[i] - 97;
        printf("%c \n", sampleInput[i]);
        printf("%i \n", charValue);

        if(seenBefore[charValue] == true){
            printf("SEEN BEFORE!\n\n");
            return true; 
        }
        seenBefore[i] = true;
    }

    print_bools(seenBeforeLen, seenBefore);


    return false;
}

/*
 * Simple function to help print out boolean array.
 */
int print_bools(int seenBeforeLen, bool* seenBefore)
{

    printf("\n");
    for(int j = 0; j < seenBeforeLen ; j++){
        if(seenBefore[j] == true){
            printf("YES!\n");
        }

        printf("%i\n", seenBefore[j]);
    }

    return 0;
}

