#include <stdio.h>
int main(){
    int a[100],i,n;
    int b[5] = {1,2,3};
    n = 3;
    // printf("Enter the size of the array: ");
    // scanf("%d",&n);
    // printf("Enter the elements one by one : \n");
    // for(i=0;i<n;i++){
    //     printf("a[%d] = ",i);
    //     scanf("%d",&a[i]);
    // }
    // printf("The elements of the array are: \n");
    // for(i=0;i<n;i++){
    //     printf("a[%d] = %d \n",i,a[i]);
    // }
    printf("The element of the array before deletion are: \n");
    for(i=0;i<n;i++){
        printf("b[%d] = %d \n",i,b[i]);
    }
    for(i=1;i<n;i++){
        b[i] = b[i+1];
        n = n - 1;
    }
    printf("The element of the array after deletion are: \n");
    for(i=0;i<n;i++){
        printf("b[%d] = %d \n",i,b[i]);
    }
    return 0;
}