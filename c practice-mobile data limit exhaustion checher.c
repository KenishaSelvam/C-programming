#include <stdio.h>

int main()
{
    int n,i=0;
    int totaldays,usage,data=0;
    
    scanf("%d",&n);
    scanf("%d",&totaldays);
    
    while(i<n)
    {
        scanf("%d",&usage);
        
        
        if(data<=0)
         break;
         
        data=data-usage;
        totaldays++;
    
    i++;
    }
    if(data<0)
    data=0;
    printf("days data lasted:%d\n",totaldays);
    printf("remaining data:%dGB",data);
    
    return 0;
}