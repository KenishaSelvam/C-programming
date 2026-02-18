#include <stdio.h>

int main()
{
    int n,drain,batteryPercentage;
    scanf("%d %d",&batteryPercentage,&n );
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&drain);
    
        batteryPercentage =batteryPercentage-drain;
    }
    printf("Remaining Battery:%d%%",batteryPercentage);
    return 0;
}