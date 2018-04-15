/*
 * Author: Gurcan Gulec
 * Filename: linear_search.c
 * Description: Implementation of linear search.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {4, 56, 12, 7, 9, 72, 67, 3, 6, 11, 45};
    // get the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);
    // ask input from the user
    int number = get_int("Which number are you searching for? ");
    // search every element
    for (int i = 0; i < length; i++)
    {
        // if the number is found, print it
        if (numbers[i] == number)
        {
            printf("The number is found! Index number: %d\n", i);
            return 0;
        }
    }
    // if the number is not found, print a message
    printf("The number is not in the array!\n");
    return 0;
}
