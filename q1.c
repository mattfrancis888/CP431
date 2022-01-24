#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main()
{

    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    printf("Random Num is: ");
    printf("%d \n", random_number);
    return 0;
}

// https://stackoverflow.com/questions/1190870/i-need-to-generate-random-numbers-in-c