// recheck this program
#include<stdio.h>

void sum(int a, int b){
    printf("Addition of these numbers are: %d\n",a+b);
}
void sub(int c, int d){
    printf("Subtraction of these numbers are: %d\n",c-d);
}
void mult(int e, int f){
    printf("Multiplication of these numbers are: %d\n",e*f);
}
void div(int g, int h){
    printf("Division of these numbers are: %d\n",g/h);
}

int main(){
    int x;
    printf("Enter 1st number to get values: ");
    scanf("%d",&x);
    int y;
    printf("Enter 2nd number to get values: ");
    scanf("%d",&y);

    sum(x,y);
    sub(x,y);
    mult(x,y);
    div(x,y);
}