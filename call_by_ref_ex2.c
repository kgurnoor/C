#include <stdio.h>
void changeValue(int *address)
{
    *address = 36;
}
int main()
{
    int a = 64;
    printf("The value of a is %d\n", a);
    changeValue(&a);
    printf("The value of a is %d\n", a);
    return 0;
}