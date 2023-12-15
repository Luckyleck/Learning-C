#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int age = 25;
    double money = 30000;
    if(age > 17 && money > 25000)
    {
        printf("This is adult\n");
    }
    else
    {
        printf("Not an adult\n");
    }

    /*
    if()
    {

    }
    elseif()
    {

    }
    else()
    {

    }

    if () printf(code); // YOU CAN ONLY PUT ONE STATEMENT AFTERWARDS

    */

    // Switch requires and integer based character, an int or a character

    int menuChoice = 2;
    switch(menuChoice)
    {
        case 0:
            printf("Case 0\n");
            break;
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("Default cases");
            break;
    }

    // switch(menuChoice)
        // case 1:
        // case 2:
        // case 3:
        // case 4:
        //     printf("Hit 3 cases above as well");

    return 0;
}