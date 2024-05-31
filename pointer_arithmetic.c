#include <stdio.h>
int main()
{
    int arr[] = {1,52,3,4,5,6,67};
    int* arrayptr = arr;
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The address of first element of array is %p\n",&arr[0]);
    printf("The address of first element of array is %p\n",arr);
    printf("The address of second element of array is %p\n",&arr[1]);
    printf("The address of second element of array is %p\n",arr + 1);
    
    printf("The Value at address of first element of array is %d\n",*(&arr[0]));
    printf("The Value at address of first element of array is %d\n",*(arr));
    printf("The Value at address of first element of array is %d\n",arr[0]);
    printf("The Value at address of second element of array is %d\n",*(&arr[1]));
    printf("The Value at address of second element of array is %d\n",*(arr + 1));
    printf("The Value at address of first element of array is %d\n",arr[1]);
    
    return 0;
}