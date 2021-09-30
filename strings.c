#include<stdio.h>
#include<conio.h>

int main(){
    char str1[10];
    char str2[10];

    printf("Enter your name and surname: \n");
    gets(str1);
    gets(str2);

    printf("Your full name is %s", strcat(str1 , str2));
    return 0;
}