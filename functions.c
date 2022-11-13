#include "functions.h"
#include <string.h>
void encrypt (int key, char *text)
{
    for (int i = 0; i < strlen(text); i++)
    {
        //if the character is lowercase
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] - 'a' + key) % 26 + 'a';

        //if the character is uppercase
        else if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] - 'A' + key) % 26 + 'A';
    }
}

void decrypt (int key, char *text)
{
    for (int i = 0; i < strlen(text); i++)
    {
        //if the character is lowercase
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = (text[i] - 'a' - key) % 26 + 'a';

        //if the character is uppercase
        else if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = (text[i] - 'A' - key) % 26 + 'A';
    }
}