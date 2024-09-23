
/*
#include <stdio.h>

int main()
{
    int week;

    printf("Enter week number from 1 to 7: ");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}*/


/**
 * C program to print day of week using switch case
 */

#include <stdio.h>

int main()
{
    char c;

    printf("Enter any character: ");
    scanf("%c", &c);

    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                    printf("The character is a vowel . ");
        default:
            printf("The character is a consonant . ");
    }

    return 0;
}
