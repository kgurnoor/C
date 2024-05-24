#include <stdio.h>
int sum(int a, int b); //with argument with return value
void printstar(int n); //with argument without return
int takenumber(); //without argument with return
void hello_world(); // without argument without return

int main()
{
    int a , b ;
    a =  4;
    b = 6;
    sum(a,b);
    printstar(7);
    takenumber();
    return 0;
}

//Function 1
int sum(int a, int b)
{   
    int c;
    c = a + b;
    printf("The sum of a and b is %d: ", c );
    return 0;
}

//Function 2
void printstar(int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%c", '*');
    }    
}

//Function 3
int takenumber()
{
    int p;
    printf("Enter a number:\n");
    scanf("%d",&p);
    printf("The number you entered is: %d \n",p);
    return 0;
}

//Function 4
void hello_world()
{
    printf("Hello World! \n");
}
