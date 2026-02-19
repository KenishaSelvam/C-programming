#include <stdio.h>

int main()
{
    int n,x,sum=0,fail=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
        
        if(x<40)
        fail++;
    }
    printf("Average Score:%d\n",sum);
    printf("Failed Subjects:%d",fail);

    return 0;
}