#include<stdio.h>

int main(){
    int a=0,b=1,i,c,n;
    printf("How many numers do you want from this series: ");
    scanf("%d",&n);

    printf("The %d numbers from fibonacci series is below:\n ");
    for(i=0;i<n;i++)
    {
        if (i<=1)
        c = i;
        else{
            c = a+b;
            a=b;
            b=c;
        }
        printf("%d\n",c);
    }
    return 0;
}