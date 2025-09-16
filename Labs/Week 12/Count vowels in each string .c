#include <stdio.h>

// Function to count vowels using pointer to array
int count_vowels(char *str) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        // Check for vowels (both lowercase and uppercase)
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    if (str[0] != '\0' && str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    int vowels = count_vowels(str);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}