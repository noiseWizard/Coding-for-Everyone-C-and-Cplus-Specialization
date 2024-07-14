/*
    attempt at turning the 3.5 example of a while loop into a for loop.
    14 July 2024
*/

#include <stdio.h>

int main(void){
    int repeat = 0;
    int i;
    printf("Guess how much I love you. (1-10):");
    scanf("%d", &repeat);
    printf("\nI love you very");
    for (i = 0; i <= repeat; i++){
        printf("\n very");
    };
    printf(" much.\n\n");
    return 0;
}