
#include <stdio.h>
#include <ctype.h>

int main()
{
    char plaintext[100], key[27], ciphertext[100];
    int i;

    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("Enter 26-letter key: ");
    scanf("%26s", key);

    for(i = 0; plaintext[i] != '\0'; i++)
    {
        if(isupper(plaintext[i]))
            ciphertext[i] = toupper(key[plaintext[i] - 'A']);

        else if(islower(plaintext[i]))
            ciphertext[i] = tolower(key[plaintext[i] - 'a']);

        else
            ciphertext[i] = plaintext[i];
    }

    ciphertext[i] = '\0';

    printf("\nEncrypted text: %s", ciphertext);

    return 0;
}
