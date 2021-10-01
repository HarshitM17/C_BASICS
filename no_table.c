#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a numer to get table: ");
    scanf("%d",&a);
    
    for (b=0; b<=10;++b)
    {
        printf("%d*%d=%d\n",a,b,a*b);
    }

}