#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("Outer loop number %d\n", i);    // j cannot be seen here as it is OOS

        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\tInner loop number %d\n", j);  // note the use of the tab (\t) option at the start to improve the layout
            
            //Task - Write another level of nesting here
            for (int k = 1; k <= 3; k++)
            {
                printf("i %d\t j %d\t k %d\n",i,j,k);
            }
        }
    }

    for (int x = 0; x <= 12; x++)
    {
        for (int y = 0; y <= 12; y++)
        {
            printf("%d x %d = %d\n", x, y, x * y);
        }
        printf("\n");
    }
}
