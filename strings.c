#include <stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'n', 'o', 'o', 'r', '\0'};
    // char str[5] = "Noor";
    char str[10];
    printf("Write your string of size 10: \n");
    gets(str);
    printf("Using custom function printStr: \n");
    printStr(str);
    printf("Using Printf:\n%s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}
