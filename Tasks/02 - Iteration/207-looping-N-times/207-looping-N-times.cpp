#include <stdio.h>

int main()
{

    //For loop (pre-C99 standard)
    for (int i = 0; i < 5; i++)     // Ironically, using this format (redefining i every loop) is probably inefficient here.
    {                               // Memory for i is reserved, then cleared, then reserved again. Alternatively you could reserve it once and just edit it.
        //Perform code tasks
        printf("i=%d\n", i);
    }

    // TASK A - count from 10 down to 0 in steps of -1
    printf("\n");
    for (int i = 10; i >= 0; i--) 
    {
        printf("i=%d\n", i);
    }

    // TASK B - count from 10 down to -10 in steps of -2
    printf("\n");
    for (int i = 10; i >= -10; i -= 2)
    {
        printf("i=%d\n", i);
    }

    // TASK C - count from 10 to 200 in steps of 10
    printf("\n");
    for (int i = 10; i <= 200; i += 10)
    {
        printf("i=%d\n", i);
    }

    // TASK D - count from -10 down to 20 in steps of 5
    printf("\n");
    for (int i = -10; i <= 20; i += 5)  // Task D's description implies you need to underflow (counting down from a negative to a positive)
    {
        printf("i=%d\n", i);
    }

    // TASK E - can you predict the largest value of i that is displayed?
    printf("\n");
    for (int i = 0; i < 12; i += 3) // 9
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}