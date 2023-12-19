#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    int ages[] = {12, 43, 545, 3, 4, 18, 87, 25}; // Declare int array with brackets and curly braces
    
    int size = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < size; i++) // To get size of array use sizeof(array) / sizeof(firstItem)
    {
        printf("ages[i] = %d\n", ages[i]);
    }

    int i = 0;
    while (i < 10)
    {   
        printf("%d\n", i);
        i++;
    }

    int j = 0;

    printf("Choose a number between 0 and 9: ");
    int input;

    do
    {
        scanf("%d", &input);
    } while(input < 0 || input > 9);
    return 0;
}