#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s1 = get_string("Word 1: ");
    string s2 = get_string("Word 2: ");

    int characters[26] = {0};

    for (int i = 0, len = strlen[s1]; i < len; i++)
    {
        if (isalpha(s1[i]))
        [
            int index = tolower(s1[i]) - 'a'; // Subtract ASCII code for a (97)
            characters[index]++;
        ]
        else
        {
            printf("Alpha chars only!\n");
            return 1; // Return 0 = working probably Return 1 = something is wrong, stop code
        }
    }

    // If anagram all values in characters array should be
    for (int i = 0; i <26; i++)
    {
        if (characters[i] != 0)
        {
            printf("Not an anagram!\n");
            return 0;
        }
    }
    printf("Anagram!\n");

}
