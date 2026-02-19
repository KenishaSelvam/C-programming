#include <stdio.h>

int main()
{
    int n,x,cash,count=0;
    scanf("%d",&cash);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        cash=cash-x;
        
        if(cash<5000)
        count++;
    }
    printf("Remaining Cash:%d\n",cash);
    printf("Risk Count:%d",count);

    return 0;
}