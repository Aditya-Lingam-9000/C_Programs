#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if exists
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Bubble sort the string characters
    for(i = 0; i < len - 1; i++) {
        for(j = 0; j < len - i - 1; j++) {
            if(str[j] > str[j + 1]) {
                // Swap characters
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}