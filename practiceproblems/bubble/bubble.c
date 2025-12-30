#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

// Function prototypes
void bubble_sort(int arr[], int size);
void print_array(int arr[], int size);

// size of array
#define SIZE 10

int main(void)
{
    // initialize array
    int arr[] = {1, 8, 4, 6, 0, 3, 5, 2, 7, 9};

    // sort array
    bubble_sort(arr, SIZE);

    // print out array
    print_array(arr, SIZE);

    // done
    return 0;
}

// Function to print an array
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

// Bubble sort
void bubble_sort(int arr[], int size)
{
    // TO DO
    int swapped;

    do
    {
        swapped = 0;

        // loop through array
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // swap the elements
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                swapped = 1; // indicate swap
            }
        }
    }
    while (swapped);
}
