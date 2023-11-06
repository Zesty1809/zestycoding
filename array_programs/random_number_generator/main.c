// Generate random numbers between 1 to 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0)); // Set the seed for rand() function as current time
    int num = (rand() % 6) + 1; // Use the rand() function to generate a statistically random number
    printf("Pseudo-random number : %d",num);
    return 0;
}