#include <stdio.h>

int main()
{
    int n,x,total=0,delay=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        total=total+x;
        
        if(x>30)
        delay++;
    }
    printf("Total Delay:%d\n",total);
    printf("Delayed Deliveries:%d",delay);

    return 0;
}