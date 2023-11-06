#include <stdio.h>
#include <stdlib.h>
int main(){
    srand(55);
    int num = rand();
    printf("Pseudo-random number : %d",num);
    return 0;
}