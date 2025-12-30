#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        printf("%c\n", text[len - i]);
    }
}
