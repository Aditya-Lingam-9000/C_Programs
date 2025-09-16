//program to print no of vowels,digits and consonants
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        }
}
printf("Number of vowels:%d\n",vowels);
printf("Number of consonants:%d\n",consonants);
printf("Number of digits:%d\n",digits);
return 0;
}
