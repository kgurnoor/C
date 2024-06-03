#include <stdio.h>
// void arrreversal(int arr[])
// {
//     for (int i=0;i<3;i++)
//     {
//         int a=arr[i];
//         arr[i]=arr[4-i];
//         arr[4-i]=a;
//     }

// }

// void printarr(int arr[])
// {
//     for (int i=0;i<5;i++)
//     {
//         printf("the value for %d index is %d\n",i,arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     printf("array before reversal\n");
//     printarr(arr);
//     arrreversal(arr);
//     printf("reversed array is\n");
//     printarr(arr);
//     return 0;
// }

// OR

void printarr(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value for %d index is %d\n", i, arr[i]);
    }
    printf("\n");
}

void arrreversal(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("the value for %d index is %d\n", i, arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printarr(arr);
    arrreversal(arr, size);
    return 0;
}