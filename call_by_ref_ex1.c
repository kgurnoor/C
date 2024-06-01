#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a = 36, b = 64;
    printf("%d and %d\n",a,b);
    swap (&a,&b);
    printf("%d and %d\n",a,b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y ;
    *y = temp;
}