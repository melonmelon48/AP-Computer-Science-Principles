#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points for each letter
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// function prototype
int compute_score(string word);

int main(void)
{
    // get inputfrom both players
    string wrd1 = get_string("Player 1: ");
    string wrd2 = get_string("Player 2: ");

    // compute scores
    int score1 = compute_score(wrd1);
    int score2 = compute_score(wrd2);

    // decide who wins or tie
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// computes score for given wrd
int compute_score(string word)
{
    int score = 0;

    // loop through every character
    for (int i = 0; i < strlen(word); i++)
    {
        // uppercase
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        // lowercase 
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
        // skip eveything else
    }

    return score;
}

