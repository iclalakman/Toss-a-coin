#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define HEAD 1
int main() {
    int toss;

    srand(time(NULL));
    toss= (int)(rand()%2);

    printf("Coin is tossed\n");

    if (toss == HEAD)
        printf("Head");
    else
        printf("Tail");

    return 0;
}




