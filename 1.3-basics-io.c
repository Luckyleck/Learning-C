#include <stdio.h>

int main()
{
    printf("Hello World\n");

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

    */
    printf("%s World\n", "Hello");
    printf("The value of x is %d\n", x);
    printf("X: %d, Y: %d\n", x, y);

    // Use scanf to ask for input
    scanf()


    return 0;
}