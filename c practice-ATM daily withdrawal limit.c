#include <stdio.h>

int main()
{
    int n,x,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    if(sum>10000)
    printf("Limited EXceeded");
    else
    printf("Approved");
    return 0;
}