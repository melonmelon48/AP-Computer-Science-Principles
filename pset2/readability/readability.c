#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //  input from user
    string text = get_string("Text: ");

    // count each part oftext
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // calc the Coleman-Lau index formula
    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // print grade lvl
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

// counts letters in text
int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

// counts # of words in txt
int count_words(string text)
{
    int count = 1; // start with 1 since last word not followed by space
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

// counts sentences using punctuation marks!!
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}
