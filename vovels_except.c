#include<stdio.h>
#include<conio.h>

int main(){
    char a;
    printf("Enter the letter: ");
    scanf("%c",&a);

    if(a=='a'||a=='e'||a=='i'||a=='o'|| a=='u')
    printf("%c is vovel congrats!!",a);
    else
    printf("%c is not a vovel",a);
}