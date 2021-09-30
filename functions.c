#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int sub(int c,int d)
{
    return c-d;
}
int mult(int e,int f)
{
    return e*f;
}
int div(int x,int y)
{
    return x/y;
}
void main()
{

    printf("The sum of 5 & 6 is: %d\n",sum(5,6));
    printf("The subtration of 10 & 5 is: %d\n",sub(10,5));
    printf("The multiplication of 2 & 5 is: %d\n",mult(2,5));
    printf("The division of 6 by 3 is: %d\n",div(6,3));

}