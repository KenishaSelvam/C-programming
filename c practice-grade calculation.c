#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    if(n<=100 && n>90)
    {
        printf("grade A");
    }
    else if(n>=75 && n<90)
    {
       printf("grade B"); 
    }
    else
    {
        printf("grade C");
    }
    return 0;
}