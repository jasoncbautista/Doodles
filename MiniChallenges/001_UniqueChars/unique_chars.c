#include <stdio.h>
#include <stdlib.h>

typedef int bool;

#define true 1
#define false 0

bool hasDuplicateChars(char * sampleInput);
int print_bools(int seenBeforeLen, bool* seenBefore);

int main()
{
    char sampleInput[] = "abcone";
    
    bool result = hasDuplicateChars(sampleInput);

    printf("%i = result \n", result);

}


bool hasDuplicateChars(char * sampleInput)
{

    int len = sizeof(sampleInput);
    bool *seenBefore;
    int seenBeforeLen = 300;
    seenBefore = (bool*)  calloc(seenBeforeLen, sizeof(bool)  );

    for(int i = 0; i < len -1 ; i++){
        int charValue  = (int)  sampleInput[i] - 97;

        if(seenBefore[charValue] == true){
            return true; 
        }
        seenBefore[charValue] = true;
    }



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

