#include <stdio.h>

int main()
{
    int n,x,total=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        total=total+x;
        
        if(x>50)
        count++;
    }
    printf("Total Errors:%d\n",total);
    printf("Critical Hours:%d",count);

    return 0;
}