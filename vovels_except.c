#include<stdio.h>
#include<conio.h>

int main(){
    char aos;
    printf("Enter the letter: ");
    scanf("%c",&aos);

    if(aos='a'||'e'||'i'||'o'||'u')
    printf("%c is vovel congrats!!",aos);
    else
    printf("%c is not a vovel");
}