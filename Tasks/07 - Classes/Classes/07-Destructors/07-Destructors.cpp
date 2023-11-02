#include <iostream>
#include "Rect.h"
using namespace COMP1000;

Rect r3(5.0f, 6.0f, "r3");		// The breakpoint for r3 is reached first, note that this is a global variable and is destroyed when the program shuts down.
								// r3's destructor runs last.

void demo() {
    Rect r0(3.0f, 10.0f,"r0");	// Destructor runs at end of function, as the object goes out of scope
    r0.display();
}

int main()
{
    //Using C++ class
    Rect r1(2.0, 3.0, "r1");	// Destructor runs at end of main, as the object goes out of scope
    r1.display();

    //Call demo - which creates a temporary Rect
    demo();

    return 0;
}
