#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;


    int location = input.find("title=");    // I hate how I've done this, but it works
    string section = input.substr(location);
    int endLoc = section.find_first_of("\n");
    section = section.substr(0, endLoc);
    location = section.find_first_of(">");
    section = section.substr(location + 1);
    endLoc = section.find_first_of("<");
    section = section.substr(0, endLoc);
    cout << section << "\n";

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    unsigned int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        string lowerWord = word;
        std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), std::tolower);    // Inefficient and probably done wrong in this context, but it is not case-sensitive
        if (lowerWord == "the") {
            count++;
        }
        cout << word << endl;   //Output each word in turn
    }
    cout << count << "\n";

    // Challenge 3 pt1
    int intArray[6]{ 0, 1, 2, 3, 4 };
    int flippedArray[5];
    int arrayLength = sizeof(intArray) / 4;
    for (int i = 0, n = 4; i < arrayLength; i++, n--)   // Probably heresy
    {
        flippedArray[i] = intArray[n];
    }
    for (int i = 0; i < arrayLength; i++) 
    {
        cout << flippedArray[i] << ", ";
    }

    cout << "\n";
    
    // Challenge 3 pt2
    for (int i = 0, n = 4; i < arrayLength/2; i++, n--) // This does not work if even. Fix maybe.
    {
        int temp = intArray[n];
        intArray[n] = intArray[i];
        intArray[i] = temp;
    }
    for (int i = 0; i < arrayLength; i++)
    {
        cout << intArray[i] << ", ";
    }
}

