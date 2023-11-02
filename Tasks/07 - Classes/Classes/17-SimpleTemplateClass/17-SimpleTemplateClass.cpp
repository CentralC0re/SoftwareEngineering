// 17-SimpleTemplateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Point.h"
#include "Point2.h"

using namespace std;

int main() {
    cout << std::fixed;
    
    //First - a pair of integers
    Point2<float> p1(4, 5);			// Point 2 is a template. It can take whatever datatype is reasonable, such as int and float
    p1.display();
    cout << p1.max() << endl;

    //Now, let's consider a pair of floats
    Point2<float> p2(4.0f, 4.5f);
    p2.display();				// Though value 2 is 4.5, it is output as 4. This is because the class is designed for integers
    cout << p2.max() << endl;

}
