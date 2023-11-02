#include <iostream>
using namespace std;
#include "Rect_t.h" //C   Version
#include "Rect.h"   //C++ Version

int main()
{
	//Using C structures
	Rect_t r1 = CreateRect(2.0, 3.0);
	display(r1);
	//setHeight(r1, 10.0f);
	r1.height = 10.0;		// Because area is not recalculated on direct changes to values, it is now incorrect.
	display(r1);

	//Using C++ class
	Rect r2(2.0, 3.0);
	r2.display();
	r2.setHeight(10.0f);
	//r2.height = 10.0;		// Because the attributes of Rect are private, they cannot be modified outside of the class and its functions.
	r2.display();
}

