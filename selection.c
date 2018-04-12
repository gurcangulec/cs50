/*
 * Author: Gurcan Gulec
 * Filename: selection.c
 * Desctiption: Implementation of selection sort
 */

#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    int i, j;
    int numbers[11] = {4, 56, 12, 7, 9, 72, 67, 3, 6, 11, 45};
    // get the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);
    // integer to swap numbers
    int temp;
    // check every element of the array
    for (i = 0; i < length; i++)
    {
        // assign the first element as the minimum
        int min = numbers[i];
        // check every element of the unsorted part of the array
        for (j = i; j < length; j++)
        {
            // find the smallest number of the unsorted part and swap
            if (numbers[j] < min)
            {
                temp = min;
                min = numbers[j];
                numbers[j] = temp;
            }
            // assign the minimum value to i'th element of the array
            numbers[i] = min;
        }
        // print i'th element of the array
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}