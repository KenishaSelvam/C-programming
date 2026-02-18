#include <stdio.h>

int main()
{
    int n,x;
    int total=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&x);
        total +=x;
        if(x>1000)
        count++;
    }
    printf("Total Expence:%d\n",total);
    printf("Overspend Days:%d",count);
    return 0;
}