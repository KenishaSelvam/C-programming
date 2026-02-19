#include <stdio.h>

int main()
{
    int n,x,total=0,high=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        total=total+x;
        
        if(x>100)
        high++;
    }
    printf("Total Loss:%d\n",total);
    printf("High Loss Days:%d",high);

    return 0;
}