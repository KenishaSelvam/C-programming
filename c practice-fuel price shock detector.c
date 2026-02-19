#include <stdio.h>

int main()
{
    int n,x,high=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x>high)
        high=x;
        
        if(x>100)
        count++;
    }
    printf("Highest Price:%d\n",high);
    printf("High Price Days:%d",count);

    return 0;
}