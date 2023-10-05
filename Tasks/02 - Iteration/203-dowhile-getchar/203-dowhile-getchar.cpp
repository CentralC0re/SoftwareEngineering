#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this
        
    } while (!(userEnteredCharacter == 'q' || userEnteredCharacter == 'Q'));            //Repeat if condition is met - note the != operator
                                                                                     //I wanted to use a to lower case function, but I'm not sure if it exists (or requires a different lib)
    // ASCII for /n is 10

    puts("Finished");
}
