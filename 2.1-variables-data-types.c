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
    return 0;
}