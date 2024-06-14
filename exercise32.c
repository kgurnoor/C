#include <stdio.h>
#include <stdlib.h>

int functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return sum; // Correctly returning the sum
}

int main()
{
    // Case 1: Deallocation of a memory block
    int *ptr = (int *) malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer
    ptr = NULL; // Best practice to avoid using the dangling pointer

    // Case 2: Function returning local variable address
    // This case is now obsolete since functionDangling returns an int, not a pointer

    int *danglingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // Here, variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

    // Accessing dangling pointers can lead to undefined behavior, so they should not be used after the scope or memory is freed

    return 0;
}
