#include <stdio.h>

int main()
{
    int n,x,total=0,heavy=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        total=total+x;
        
        if(x>50)
        heavy++;
    }
    printf("Total Rainfall:%d\n",total);
    printf("Heavy Rain Days:%d",heavy);

    return 0;
}