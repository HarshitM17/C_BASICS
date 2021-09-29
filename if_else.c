#include<stdio.h>
#include<conio.h>

int main()
{
    int x ;
    printf("Enter the int value for x: ");
    scanf("%d",&x);
    int y ;
    printf("Enter the int value for y: ");
    scanf("%d",&y);

    if( x>y ){
        printf("X is greater");
    }
    else{
        printf("Y is greater");
    }
    
}