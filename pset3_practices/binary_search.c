/*
 * Author: Gurcan Gulec
 * Filename: binary_search.c
 * Description: Implementation of binary search.
 */

#include <stdio.h>
#include <cs50.h>

int numbers[] = {4, 56, 12, 7, 9, 72, 67, 3, 6, 11, 45, 55, 34, 10};
// get the length of the array
int length = sizeof(numbers) / sizeof(numbers[0]);

// function declaration
int *sort_array(int array[]);

int main(void)
{
    sort_array(numbers);
    // ask input from the user
    int number = get_int("Which number are you searching for? ");

    int start = 0;
    int end = length;
    do
    {
        // calculate the middle point
        int mid = (start + end) / 2;
        if (numbers[mid] == number)
        {
            printf("The number is found! Index number: %d\n", mid);
            return 0;
        }
        else if (numbers[mid] < number)
        {
            // change the start point just to the right of the middle
            start = mid + 1;
        }
        else if (numbers[mid] > number)
        {
            // change the start point just to the left of the middle
            end = mid - 1;
        }
    }
    while (start <= end); // continue until array size is not minus
    // if the number is not found, print a message
    printf("The number is not in the array!\n");
    return 0;
}

// function to sort the array
int *sort_array(int array[])
{
    // check every element of the array
    for (int i = 1; i < length; i++)
    {
        // extract a number from the unsorted part
        int extract = array[i];
        //
        for (int j = i; j > 0; j--)
        {
            // call the first element of the array sorted
            int sorted = array[j - 1];
            // inserting the elements by shifting, putting them into the sorted part
            if (array[j - 1] > extract)
            {
                array[j] = sorted;
                array[j - 1] = extract;
            }
        }
    }
    return array;
}