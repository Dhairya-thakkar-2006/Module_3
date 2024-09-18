#include <stdio.h>
#include <string.h>

void getString(int pos, int len, int i, char string[])
{
    char substring[1000];

    while (i < len) {
        substring[i] = string[pos + i - 1];
        i++;
    }
    substring[i] = '\0';
    printf("%s\n",substring);
    return 0;
}
main()
{

    int pos, len, i = 0;
    char string[25] = "the world is Technology";
    pos = 9;
    len = 8;

    printf("String: %s ", string);
    printf("\nsubstring is: ");
    getString(pos, len, i, string);
}
