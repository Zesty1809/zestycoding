#include <stdio.h>
int main(){
    int a[50],n,i,j,t;
    printf("Enter the no of elements in the list : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Before Bubble sorting the elements are : ");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nAfter bubble sorting the elements are : ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;

}