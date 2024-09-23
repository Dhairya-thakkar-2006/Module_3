//C Program to Check Uppercase or Lowercase or Digit or SpecialCharacter

#include<stdio.h>
main()
{
    char ch;

    printf("\n\n\t Enter any character :  ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("\n%c is an UpperCase character",ch);

    else if (ch >= 'a' && ch <= 'z')
        printf("\n%c is a LowerCase character",ch);
    else if (ch>='1' && ch<='9')
        printf("\n%c is a digit",ch);
    else
        printf("\n%c is a special character ",ch);
}
