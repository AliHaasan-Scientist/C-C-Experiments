#include <stdio.h>
int main()
{
    int input(void);// Declartion of funtion > function prototype>
    int a, b, z;
    printf("Enter First number:");
    a = input();
    printf("Enter Second number:");
    b = input();//function call 
    z = a + b;
    printf("Sum is:%d", z);
}

int input()/* Function Defination--------------> 
 This is a return something & takes nothing type function.Which take as input value by the use*/
{
    int x;
    scanf("%d", &x);
    return (x);
}
