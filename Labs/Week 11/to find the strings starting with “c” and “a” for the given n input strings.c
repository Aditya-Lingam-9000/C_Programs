#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume newline character after scanf

    char str[100];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; // Remove newline

        if (str[0] == 'c' || str[0] == 'C' || str[0] == 'a' || str[0] == 'A') {
            printf("%s\n", str);
        }
    }
    return 0;
}