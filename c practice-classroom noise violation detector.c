#include <stdio.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int noise,violations,streak,maxstreak=0;
    while(i<n)
    {
        scanf("%d",&noise);
        if(noise>70)
        {
            violations++;
            streak++;
            if(streak>maxstreak)
            maxstreak=streak;
    }
    else
    {
        streak=0;
    }
    i++;
    }
    printf("noise violations:%d\n",violations);
    printf("lomgest violation streak:%d",streak);
    return 0;
}