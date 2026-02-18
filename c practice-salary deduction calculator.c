#include <stdio.h>

int main()
{
    int n,a,salary=0;
    scanf("%d %d",&salary,&a);
    
    for(int i=0;i<a;i++)
    
        salary =salary-100;
    
    printf("Final Salary:$%d",salary);
    return 0;
}