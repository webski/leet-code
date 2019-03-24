#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void printArray(int *arr, int size)
{
    int i;
    putchar('[');
    for (i = 0; i < size; i++)
        printf(" %d ", arr[i]);
    putchar(']');
}

bool containsDuplicate(int *nums, int numsSize)
{
    int cnt = 0;
    if (numsSize > 1)
    {

        qsort(nums, numsSize, sizeof(int), cmpfunc);
        printArray(nums, numsSize);

        if (numsSize == 2)
        {
            return (*nums == *(nums + 1));
        }
        else
        {
            int i = 0;
            // cnt++;
            for (; i < (numsSize - 1); i++)
            {
                printf("%d\n", i);
                if (*(nums + i) != *(nums + i + 1))
                {
                    cnt++;
                }
            }
            if (*(nums + numsSize - 1) != *(nums + numsSize))
            {
                cnt++;
            }
        }
        printf("%d  %d\n", *(nums + numsSize - 1), *(nums + numsSize - 2));
    }
    else
        return false;

    printf("[%d]", cnt);
    if (cnt == numsSize)
        return false;
    else
        return true;
}
// bool containsDuplicate(int *nums, int numsSize)
// {
//     int cnt = 0;
//     if (numsSize > 1)
//     {

//         qsort(nums, numsSize, sizeof(int), cmpfunc);
//         printArray(nums, numsSize);

//         if (numsSize == 2)
//         {
//             return ((*nums != *(nums + 1)) ? false : true);
//         }
// int i = 1;
//         cnt+=2;
//         while (i++ < (numsSize - 1))
//         {
//             printf("%d\n", i);
//             if (*(nums + i) != *(nums + i + 1))
//             {
//                 cnt++;
//             }
//         }
//         if (*(nums + numsSize - 1) != *(nums + numsSize))
//         {
//             cnt++;
//         }
//         printf("%d  %d\n", *(nums + numsSize - 1), *(nums + numsSize - 2));
//     }
//     else
//         return false;

//     if (cnt == numsSize)
//         return false;
//     else
//         return true;
// }

#define INPUT_SIZE 4
// int arr[INPUT_SIZE] = {3, 1};
int arr[INPUT_SIZE] = {1, 2, 3, 1};

int main()
{
    printf("INPUT: [");

    int i = 0;
    for (; i < INPUT_SIZE; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
    if (containsDuplicate(arr, INPUT_SIZE))
    {
        printf("true");
    }
    else
        printf("false");
    putchar('\n');
    return 0;
}