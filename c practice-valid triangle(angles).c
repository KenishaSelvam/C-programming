#include <stdio.h>
int main(){
    int a,b,c;
    int sum;
    printf("enter three angle:");
    scanf("%d %d %d,&a,&b,&c");
    sum=a+b+c;
    if(sum==180 && a>0 && b>0 && c>0)
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }
    return 0;
}