#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void printArray(int *arr, int size)
{
    int i;
    putchar('[');
    for (i = 0; i < size; i++)
        printf(" %d ", arr[i]);
    putchar(']');
}

void swap(int *i1, int *i2)
{
    int tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

void rotate(int *nums, int numsSize, int k)
{
    int *start_ptr,
        *end_ptr;

    if (k > 0 && numsSize > 1)
    {
        if (k > numsSize)
        {
            k -= numsSize;
        }

        int i, tmp;
        start_ptr = nums + k;
        end_ptr = nums + (numsSize - k);

        for (i = 0; i < numsSize; i++)
        {
            //try swaping pointers
            // if ((i + 1) < numsSize)
            // {
            //     tmp = *(nums + i);
            //     *(nums + i) = *(nums + i - 1);
            // }
        }
        // if (k > 0 && numsSize > 1)
        // {
        //     int *tmp = (int *)malloc(numsSize * sizeof(int));
        //     memcpy(tmp, nums, numsSize * sizeof(int));
        //     if (k > numsSize)
        //     {
        //         k -= numsSize;
        //     }
        //     start_ptr = nums + k;
        //     end_ptr = nums + (numsSize - k);
        //     memcpy(start_ptr, tmp, (numsSize - k) * sizeof(int));
        //     memcpy(nums, tmp + (numsSize - k), (k) * sizeof(int));
        // }
    }
}

#define INPUT_SIZE 2
int array[INPUT_SIZE] = {1, 2};
// int array[INPUT_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 166, 177, 188, 199};

int main()
{
    // printArray(array, INPUT_SIZE);
    // rotate(array, INPUT_SIZE, 3);
    // printArray(array, INPUT_SIZE);
    // return 0;
    int x = -11, y = 45;
    printf("%d  %d\n", x, y);
    swap(&x, &y);
    printf("%d  %d\n", x, y);
}