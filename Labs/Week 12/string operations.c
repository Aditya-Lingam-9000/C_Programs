#include <stdio.h>

// Function to calculate length of string
int str_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to copy string src to dest
void str_copy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate src at the end of dest
void str_concat(char dest[], char src[]) {
    int i = 0;
    while (dest[i] != '\0') { // Find end of dest
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// Function to convert string to uppercase
void str_upper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

// Function to compare two strings (returns 0 if equal)
int str_compare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100], temp[200];
    int res;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove trailing newline if present
    int len1 = str_length(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline if present
    int len2 = str_length(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    printf("\nLength of first string: %d\n", str_length(str1));

    str_copy(temp, str1);
    printf("Copy of first string: %s\n", temp);

    str_concat(temp, str2);
    printf("Concatenation of first + second string: %s\n", temp);

    str_upper(str1);
    printf("First string in uppercase: %s\n", str1);

    res = str_compare(str1, str2);
    if (res == 0) {
        printf("Strings are equal.\n");
    }
    else if (res < 0) {
        printf("First string is less than second string.\n");
    }
    else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}