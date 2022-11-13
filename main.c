#include <stdio.h>
#include "functions.h"

int main() {

    printf("Welcome to Caesar Cipher\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("3. Exit\n");
    printf("Choose an option: ");
    int choice;
    scanf("%d", &choice);
    int key = 0;
    char text[100];
    switch (choice) {
        case 1:
            printf("Enter the key: ");
            scanf("%d", &key);
            printf("Enter the text: ");
            scanf("%s", text);
            encrypt(key, text);
            printf("Encrypted text: %s\n", text);
            break;
        case 2:
            printf("Enter the key: ");
            scanf("%d", &key);
            printf("Enter the text: ");
            scanf("%s", text);
            decrypt(key, text);
            printf("Decrypted text: %s\n", text);
            break;
        case 3:
            printf("Goodbye!");
            break;
        default:
            printf("Invalid option");
            break;
    }
}
