#include<stdio.h>
#include<conio.h>

int main(){
    char str1[10];
    char str2[10];

    printf("Enter two wtrings/words: \n");
    gets(str1);
    gets(str2);

    printf("\n Length of this word is: %d",strlen(str1));
    printf("\n Length of this word is: %d",strlen(str2));
    return 0;
}