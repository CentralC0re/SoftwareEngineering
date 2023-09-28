#include <stdio.h>

int main()
{
    // ************************ Using puts ******************************** 
    puts("Hello World!");   //Write Hello World to the terminal


    // ************************ Using printf ******************************* 
    printf("Hello Everyone. We are using C How are things? ");
    // TASK (a) - remove \n from the string above - what does this change? 
	// No new lines
    
    // ******************* Using printf placeholders *********************** 
    int age = 23;
    printf("My age is %d\n", age);

    // Some other placeholders include %c for character and %f for floating point
    float radius = 10.0f;
    float area = 3.415926 * radius * radius;

	printf("Area: %0.3f\n", area); // 0.3 is to 3 decimal places. The whole number is field width (min digits)
	// Note: the lecture slides are *not* available.
    
    //

    // You can output complex strings to the terminal
    int p = 3;
    int q = 4;
    printf("p=%d, q=%d\n", p, q);

	printf("Radius: %0.0f	Area: %0.3f\n", radius, area);

    //
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

