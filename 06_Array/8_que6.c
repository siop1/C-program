// WAP containing a function which counts the number of positive integers in an array.

#include <stdio.h>
int count(int arr[], int size)
{
    int positive = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            positive++;
    }
    return positive;
}
int main()
{
    int arr[6] = {1, 2, -6, -2, 8,5};
    printf("There are %d positive numbers in the given array\n",count(arr, 6));
    return 0;
}