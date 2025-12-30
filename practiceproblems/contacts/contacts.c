#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    string phone = get_string("Phone numbers: ");
    string address = get_string("Address: ");
    printf("\n New Contact: %s, %i, lives at %s, and can be reached at %s\n", name, age, address,
           phone);
}
