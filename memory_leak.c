#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to Code with me\n");
        i2 = malloc(14444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);
    }
    return 0;
}