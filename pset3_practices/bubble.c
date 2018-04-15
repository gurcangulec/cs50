/*
 * Author: Gurcan Gulec
 * Filename: bubble.c
 * Desctiption: Implementation of bubble sort
 */

#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 56, 12, 7, 9, 72, 67, 3, 6, 11, 45};
    // get the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);
    // to keep the record of how many times we swapped in one loop
    // assigning a value other than 0
    int swap_counter = -1;
    // integer to swap numbers
    int temp;
    // repeat the loop until swap counter is 0
    do
    {
        // set the swap_counter to 0
        swap_counter = 0;
        // go through all the elements of array until length minus 1
        for (int i = 0; i < length - 1; i++)
        {
            // if the number on the left is bigger, swap
            if (numbers[i] > numbers[i + 1])
            {
                // swap numbers and increase swap_counter
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                swap_counter++;
            }
        }
    }
    while (swap_counter != 0);
    // print out the sorted array
    for (int j = 0; j < 11; j++)
    {
        printf("%d ", numbers[j]);
    }
    printf("\n");
    return 0;
}