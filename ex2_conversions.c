#include <stdio.h>
float kms_miles(int n);
float inches_foot(int n);
float cms_inches(int n);
float pound_kgs(int n);
float inches_meters(int n);

int main()
{
    int conversion, num;
    printf("1. kms to miles \n2. inches to foot \n3. cms to inches \n4. pound to kgs \n5. inches to meters \nChoose a number: ");
    scanf("%d", &conversion);
    if (conversion <= 5)
    {
        printf("You chose conversion number %d \n", conversion);
    }
    else
    {
        printf("Please choose a number between 1 and 5 \n");
    }
    printf("Give the number you want to convert : \n");
    scanf("%d", &num);
    if (conversion == 1)
    {
        float a = kms_miles(num);
        printf("%d kms convert to %f miles. \n", num, a);
    }
    else if (conversion == 2)
    {
        float b = inches_foot(num);
        printf("%d inches convert to %f feet. \n", num, b);
    }
    else if (conversion == 3)
    {
        float c = cms_inches(num);
        printf("%d cms convert to %f inches. \n", num, c);
    }
    else if (conversion == 4)
    {
        float d = pound_kgs(num);
        printf("%d pounds convert to %f kgs. \n", num, d);
    }
    else if (conversion == 5)
    {
        float e = inches_meters(num);
        printf("%d inches convert to %f meters. \n", num, e);
    }
    return 0;
}

// conversion 1
float kms_miles(int n)
{
    return n * 0.6213712;
}

// conversion 2
float inches_foot(int n)
{
    return n * 0.08333333;
}

// conversion 3
float cms_inches(int n)
{
    return n * 0.3937008;
}

// conversion 4
float pound_kgs(int n)
{
    return n * 0.4535924;
}

// conversion 5
float inches_meters(int n)
{
    return n * 0.0254;
}