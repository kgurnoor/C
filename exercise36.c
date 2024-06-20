#include <stdio.h>
#include <stdlib.h>
int main ()
{
    printf("file name is %s\n,__FILE__");
    printf("today's date is %s\n",__DATE__);
    printf("line no is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);

}