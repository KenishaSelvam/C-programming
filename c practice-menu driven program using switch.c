#include <stdio.h>

int main()
{
    int choice,a,b;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        scanf("%d %d",&a,&b);
        printf("sum=%d",a+b);
        break;
    }
    return 0;
}