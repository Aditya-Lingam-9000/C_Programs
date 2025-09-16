#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp[20][20];
    int i = 0, j = 0, k = 0, word_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline

    // Split the string into words
    while (str[i]) {
        if (str[i] != ' ') {
            temp[word_count][j++] = str[i];
        } else {
            temp[word_count][j] = '\0';
            word_count++;
            j = 0;
        }
        i++;
    }
    temp[word_count][j] = '\0'; // Terminate the last word

    // Print words in reverse order
    for (k = word_count; k >= 0; k--) {
        printf("%s", temp[k]);
        if (k > 0) printf(" ");
    }
    printf("\n");
    return 0;
}