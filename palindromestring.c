#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = strlen(str) - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

