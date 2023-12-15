#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;

    double b = 10.5; // Can have a decimal, 64 bit
    printf("%lu\n", sizeof(b)); // 8 bytes = 64 bits

    float c = 10.5; // Decimal allowed, 32 bit
    printf("%lu\n", sizeof(c)); // 4 bytes = 32 bits

    char d = 'a'; // Stores one letter
    char e[] = "char array"; // aka string
    bool f = false;

    // Do not start variables with numbers
    // Variables are case sensitive

    // Implicit type conversion
    int zero = .99999999;
    printf("%d\n", zero);

    // Type casting
    int slices = 17;
    int people = 2;

    // if dividing integer by integer you can only get integer back
    // double slicesPerPerson = slices / people; // This would result in 8, not 8.5

    double slicesPerPerson = (double) slices / people; // 8.500000
    printf("%lf\n", slicesPerPerson); // %lf is double specifier

    // if variable is double and you want a double value returned add a .0 after the variable in the expression

    return 0;

}