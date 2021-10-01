#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the int value of a: ");
    scanf("%d",&a);
    printf("Enter the int value of b: ");
    scanf("%d",&b);


    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nValue of a is now: %d",a);
    printf("\nValue of b is now: %d",b);

    return 0;

}