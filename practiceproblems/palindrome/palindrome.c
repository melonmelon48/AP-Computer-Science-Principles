#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");

    for(int i = 0, len = strlen(s); i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            printf("Not a palindrome!\n");
            return 0;
        }
    }

    printf("Palindrome! \n");
}
