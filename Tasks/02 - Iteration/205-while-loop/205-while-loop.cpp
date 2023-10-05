#include <stdio.h>

int main()
{
    int i = 10;

    puts("Start while loop");

    while (i >= 0)
    {
        printf("i = %d\n", i);
        i -= 2;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with i=%d\n", i);
    // Loops 5 times (0-4) and stops. If i = 5 or 6, loops 0 times (5-5) and stops.
}

