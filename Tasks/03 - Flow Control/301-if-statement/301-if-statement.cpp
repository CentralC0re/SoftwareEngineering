/*

    If statements

    Note here that I am using the C++ cout to write to the console. You can use printf if you prefer,
    but I want to start moving towards C++ and away from C where there are advantages

*/ 

#include <iostream>

// The fuly qualified name for cout is actually std::cout
// :: is known as the "scoping operator" - more on this later
// std is known as a "namespace" - it is a prefix that helps us avoid replicating names
// The standard C++ library uses std:: prefix for many of it's functions
// It is tedious to write this every time, so we make the default namespace std
using namespace std;

int main()
{
    //Some constants 
    const int high = 100, low = 10;
    
    // start filling the tank 
    int level = 5;

    //Read the keyboad to get the level
    //Repeat until a valid value has been added
    do {
        cout << "Please enter a level (between 0 and 100)" << endl; // Entering a value results in a response depending on level in relation to high and low
        cin >> level;                                               // Entering < 0 (-10) repeats the prompt, as an invalid statement has been provided.
    } while (level < 0 || level > 100);

    if (level <= low)                       // check the level
    {
        cout << "Tank needs filling" << endl;
    }

    if (level > low)                       // monitor the level     Because this has no upper bound, going above 100 still triggers it.
    {                                                               // Fixed this by limiting input
        cout << "Tank has sufficient fuel for now" << endl;
    }

    if (level == high)                       // monitor the level   Setting this to = fails because = is an assignment operator, not comparison.
    {                                                               // As a result, level = high is always true, so this line always runs.
        cout << "Tank is full" << endl;
    }

    if (level == 0)
    {
        cout << "Tank is empty" << endl;
    }
}
