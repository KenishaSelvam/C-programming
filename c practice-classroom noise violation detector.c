#include <stdio.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int noise,violations=0,streak=0,maxstreak=0;
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
    printf("longest violation streak:%d",streak);
    return 0;

}
