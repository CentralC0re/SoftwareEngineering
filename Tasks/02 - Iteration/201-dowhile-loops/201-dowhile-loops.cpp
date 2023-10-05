#include <stdio.h>

int main()
{
    int i = 5;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i--;              // Alternatively, write i++;
    } while (i >= 0);            //Repeat if condition is met

    printf("Finished: i = %d\n", i);

    // Looped 5 times, i reaches 5
    // Changing i to 6 causes the loop to run once anyway before stopping. i = 7 on conclusion.
    // This is because do while always runs once.
}


