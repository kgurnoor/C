#include <stdio.h>
int main()
{
    int pattern;
    printf("Enter [0] for triangular star pattern or [1] for reversed triangular pattern.\n");
    scanf("%d", &pattern);
    printf("You chose %d\n", pattern);
    if (pattern == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (pattern == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 5; j > i; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}