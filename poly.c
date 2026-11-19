
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[100], key[100];
    int i, j = 0;

    printf("Enter plaintext: ");
    scanf("%s", text);

    printf("Enter key: ");
    scanf("%s", key);

    int n = strlen(text);
    int k = strlen(key);

    printf("Encrypted text: ");

    for (i = 0; i < n; i++) {
        char p = toupper(text[i]);
        char c = toupper(key[j % k]);

        char e = ((p - 'A') + (c - 'A')) % 26 + 'A';

        printf("%c", e);
        j++;
    }

    printf("\n");

    return 0;
}
