#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b)
{
    return a +b;
}
int main()
{
    printf("the sum is %d\n",sum(1,2));
    int(*fPtr)(int,int);
    fPtr=&sum;
    int d=(*fPtr)(4,5);
    printf("he value f d is %d\n",d);
    return 0;
}