#include <stdio.h>

// Function to calculate length of a string
int my_strlen(const char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void my_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++) != '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[my_strlen(str1) - 1] = '\0'; // Remove newline

    printf("Length of string: %d\n", my_strlen(str1));

    my_strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    return 0;
}