#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int d1, d2, total;
    
    srand(time(NULL));
    
    printf("Rolling the dice...\n");
    
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1; 
    
    total = d1 + d2; 
    
    printf("Die 1: %d\n", d1);
    printf("Die 2: %d\n", d2);
    printf("Total value: %d\n", total);
    
    if (total > 7) {
        printf("You won!\n");
    } else {
        printf("You lost.\n");
    }
    
    return 0;
}
