#include <stdio.h>

int main()
{
    printf("Hello World\n"); // Use \n

    int x = 50;
    int y;  // declaration
    y = 10; // initialization

    /*
    Format Specifiers
                        // Signed vs Unsigned \\ 
                    Signed uses one bit to recognize the positve or negative
                    Unsigned uses all bits represent number, no negative values
    %s - strings
    %c - char
    %f - float
    %d - int (short int, signed) 16 bits        
    %ld - int (long int, signed) 32 bits          
    %lld - int (long long int, signed) 64 bits
    %i - unsigned integer
    %hu - unsigned integer short
    %lu - unsighned long

    */
    printf("%s World\n", "Hello");
    printf("The value of x is %d\n", x);
    printf("X: %d, Y: %d\n", x, y);

    // Use scanf to ask for input
    // Use & ampersand before you change value of variable

    printf("Give me a radius: ");
    int radius;
    scanf("%d", &radius); //address-of-operator (pointer) needed, except with arrays

    printf("You gave me %d\n", radius); 

    char name[20]; //char array of 20 characters. Must reserve one character for the 'null terminator < \0 > takes one spot
     
    // Although we say that name array is 20 characters long, it's actually 19 because of the null terminator
    // If it's longer than 19 characters it won't capture the entire string

    printf("Give me your name: ");
    scanf("%19s", name); // notice we don't need address-of-operator for array '&'. Arrays decay into pointers.
    printf("Your name is %s\n", name);

    return 0;
}