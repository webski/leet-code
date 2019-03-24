// #include <string.h>
#include <stdio.h>

void reverseString(char *s, int sSize)
{
    if (sSize > 1)
    {
        int i = 0, j = sSize - 1, c;
        for (; i < j; i++)
        {
            c = s[i];
            s[i] = s[j];
            s[j--] = c;
        }
    }
}

int main()
{
    char string[5] = {"hello"};
    printf("%s\n", string);
    reverseString(string, 5);
    printf("%s\n", string);

    return 0;
}