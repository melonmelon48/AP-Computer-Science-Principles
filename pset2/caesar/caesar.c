#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// checks if keyonly has difits
bool only_digits(string key);

int main(int argc, string argv[])
{
    //  one command line arg
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1; // stop early if wrong usage
    }

    // check every char of argv1 is digit
    if (!only_digits(argv[1]))
    {
        printf("Key must be numbers only!\n");
        return 1;
    }

    // convert key from string -> int
    int key = atoi(argv[1]);

    // user Input
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // loop through each char in plaintext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];


        if (isalpha(c))
        {
            // uppercase
            if (isupper(c))
            {
                printf("%c", 'A' + (c - 'A' + key) % 26);
            }
            // lowercase
            else if (islower(c))
            {
                printf("%c", 'a' + (c - 'a' + key) % 26);
            }
        }
        else
        {

            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}

// makes sure key all digits
bool only_digits(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            return false;
        }
    }
    return true;
}
