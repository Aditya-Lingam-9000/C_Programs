#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    if (len < 2) return;

    int index = 0; // Index for placing unique characters
    int i, j;

    for (i = 0; i < len; i++) {
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) { // No duplicate found before i
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline from fgets

    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);

    return 0;
}