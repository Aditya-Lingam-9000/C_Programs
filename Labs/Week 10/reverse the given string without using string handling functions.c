#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse logic
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0'; // Null terminate the reversed string

    // Output result
    printf("Reversed string: %s\n", rev);

    return 0;
}