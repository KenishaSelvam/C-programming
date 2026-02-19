#include <stdio.h>

int main()
{
    int n,x,total=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        total=total+x;
        
        if(x>100)
        count++;
    }
    printf("Total Patients:%d\n",total);
    printf("Overcrowded Days:%d",count);

    return 0;
}