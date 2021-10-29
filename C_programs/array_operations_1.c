#include<stdio.h>

int main(){
    int i;
    int a[5];
    printf("Enter the numbers to sort");
    for (i=0;  i<5; i=++i){
        printf("Enter the numbers %d ",i + 1);
        scanf("%d", &a[i]);
    }

    //assign the array's first address to variable p
    int *p = a;
    int q = *a;
    int *r = &a[0];

    printf("\n p value %d q value %d r value %d ", p, q, r);
    printf("\n The numbers in the array are : ");
    for (i=0;  i<5; i=++i){
        //printf("The numbers i  is in first format %d \n", i + 1, a[i]);
        //printf("The numbers i is in second format %d \n", i + 1, *(a+i));
        printf("The numbers i is in third format %d \n", i + 1, p);
        printf("The numbers i is in fourth format %d \n", i + 1, q);
        printf("The numbers i is in fifth format %d \n", i + 1, r);
    }

    //bubble_sort(a);
    return 0;
}