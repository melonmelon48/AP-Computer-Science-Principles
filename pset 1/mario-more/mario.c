#include <cs50.h>
#include <stdio.h>

// Functions
void draw_pyramid(int height);
void draw_row(int total_height, int current_row);

int main(void)
{
    int height;

    // Prompt user until valid height is entered
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    draw_pyramid(height);
}

// Draws the pyramid
void draw_pyramid(int height)
{
    for (int row = 1; row <= height; row++)
    {
        draw_row(height, row);
    }
}

// Draws a single row of the pyramid
void draw_row(int total_height, int current_row)
{
    int spaces = total_height - current_row;

    // Print leading spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Print left hashes
    for (int i = 0; i < current_row; i++)
    {
        printf("#");
    }

    // Print middle gap
    printf("  ");

    // Print right hashes
    for (int i = 0; i < current_row; i++)
    {
        printf("#");
    }

    printf("\n");
}
