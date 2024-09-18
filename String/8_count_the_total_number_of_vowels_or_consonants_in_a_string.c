#include <stdio.h>

int main() {
    char str[30];
    int vowels = 0, consonants = 0;
    int i = 0;
    
    printf("Enter a string : ");
    
    scanf("%s", str);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A'); 
        }

        if ((ch >= 'a' && ch <= 'z')) { 
        
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

}

