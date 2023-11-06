#include <stdio.h>
int main(){
    int A[3],i;
    printf("The element of array before insertion are: \n");
    for(i=0;i<3;i++){
        printf("A[%d] = %d \n",i,A[i]);
    }
    printf("Inserting elements...\n");
    for(i=0;i<3;i++){
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    printf("The element of array after insertion are: \n");
    for(i=0;i<3;i++){
        printf("A[%d] = %d \n",i,A[i]);
    }
    return 0;
}