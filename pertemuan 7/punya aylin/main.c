#include <stdio.h>
int main()
{
    int ArrayA[5]={1,3,9,5,2}, ArrayB[5]={4,5,1,7,3};
    int tempt[5], j;

    for(j=0; j<5; j++){
        tempt[j] = ArrayA[j];
        ArrayA[j] = ArrayB[j];
        ArrayB[j] = tempt[j];
    }

    printf("ArrayA : ");
    for(j=0; j<5; j++)
        printf(" %d ", ArrayA[j]);

    printf("\nArrayB : ");
    for(j=0; j<5; j++)
        printf(" %d ", ArrayB[j]);

    return 0;


}
