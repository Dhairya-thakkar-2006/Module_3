#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[] = "is";
    int i, j, count = 0,wordLen = strlen(word);

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < wordLen; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == wordLen) {
            count++;
            i += wordLen - 1;
        }
    }
    printf("The word '%s' appears %d times in the given string.\n", word, count);
}
