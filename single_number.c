#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    if (numsSize == 1)
        return *nums;
    else
    {
        int i, j, found;

        for (i = 0; i < numsSize ; i++) //take new root
        {
            printf("root = %d\n", *(nums+i));
            found = 0;
            for (j = 0; j < numsSize; j++) //compare until duplicate found
            {
                printf("    compare = %d\n", *(nums+j));
                if (j != i)
                {
                    if (*(nums + i) == *(nums + j))
                    {
                        printf("    duplicate found = %d\n", *(nums+j));
                        found = 1;
                        break;
                    }
                }
            }
            if(!found) return *(nums+i);
        }
    }

    return 0;
}

#define INPUT_SIZE 5
int arr[INPUT_SIZE] = {4, 1, 2, 1, 2};
// int arr[INPUT_SIZE] = {2,2,1};

int main()
{
    printf("INPUT: [");

    int i = 0;
    for (; i < INPUT_SIZE; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("]\n");
    if (singleNumber(arr, INPUT_SIZE) == 4)
    {
        printf("true");
    }
    else
        printf("false");
    putchar('\n');
    return 0;
}