// The below script contains array operations of level 2
// The below script merges the two arrays 
#include<stdio.h>
int main(){
    int i, j;
    int a[5] = {1,2,3,4,5};
    int b[5] = {6,7,8,9,10};
    //int c = *a + *b;
    int c[10];

    for(j=0; j<5; j++){
        printf("b %d", b[j]);
    }

    for (i=0; i<5; i++){
        c[i] = a[i];
    }

    for(i=0, j=5; i<5, j<10; i++, j++){
        //printf("b %d", b[j]);
        c[j] = b[i];
    }

    for (i=0; i<10; i++){
        printf("\n The value of the array c is : ");
        printf("%d", c[i]);
    }
    return 0;
} 