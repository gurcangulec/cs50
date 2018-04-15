/*
 * Author: Gurcan Gulec
 * Filename: insertion.c
 * Description: Implementation of insertion sort.
 */

#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 56, 12, 7, 9, 72, 67, 3, 6, 11, 45};
    // get the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // check every element of the array
    for (int i = 1; i < length; i++)
    {
        // extract a number from the unsorted part
        int extract = numbers[i];
        //
        for (int j = i; j > 0; j--)
        {
            // call the first element of the array sorted
            int sorted = numbers[j - 1];
            // inserting the elements by shifting, putting them into the sorted part
            if (numbers[j - 1] > extract)
            {
                numbers[j] = sorted;
                numbers[j - 1] = extract;
            }
        }
    }
    // print sorted array on the screen
    for (int k = 0; k < length; k++)
    {
        printf("%d ", numbers[k]);
    }
    printf("\n");
    return 0;
}