#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // (i) Open for write
    ofstream outputStream;
    //outputStream.open("myfile.txt");
    outputStream.open("myfile.txt", ios::app);  // ios::app causes it to append rather than overwrite
    if (!outputStream.is_open()) {              // ios:in sets to input, out sets to output, binary sets to binary mode, ate sets initial position to the end, and trunc overwrites
        cerr << "Cannot create file" << endl;   // These flags can be combined with |
        return -1;
    }

    // (ii) Stream characters
    outputStream << "Hello COMP1000" << endl << "--------------" << endl;
    outputStream << "Subject Area: " << "COMP" << endl;
    outputStream << "Module ID: " << 2000 << endl;

    // (iii) Close
    outputStream.close();

    return 0;
}
