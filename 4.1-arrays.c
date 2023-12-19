#include <stdio.h>

int main()
{
    // When passing arrays to functions, you must have size attached as another argument.
    int ages[] = {10,20,30,40,50,60,70,80,90,100}; // You must declare the datatype of the array, Statically sized
    int size = 10;

    for (int i = 0; i < size; i++) {
        printf("%d\n", ages[i]);
    }

    int const rows = 3;
    int const columns = 4;

    int studentGrades[][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }

    return 0;
}