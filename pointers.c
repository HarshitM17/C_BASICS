#include<stdio.h>

void main(){
    int a = 25;
    int *p;

    p =&a;

    printf("\nAddress of a is %x",&a);
    printf("\nAddress using pointer variable is %x",p);
    printf("\nValue of a using *p is %d",*p);
    
}