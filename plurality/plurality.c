#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX 9

// Struct to store candidates info
typedef struct
{
    string name;
    int votes;
} candidate;

// Array that holdall candidates
candidate candidates[MAX];

int candidate_count;

// function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // make sure user typed at least 1 candidate
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    candidate_count = argc - 1;

    // dont allow too many candidates
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    // set up each candidate
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // go through each voter and record vote
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    print_winner();
}

// check if vote matches any candidate
bool vote(string name)
{

    for (int i = 0; i < candidate_count; i++)
    {

        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }

    return false;
}

// figure out who won and print it
void print_winner(void)
{
    int max_votes = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }

    // prints anyone who tied for highest
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}
