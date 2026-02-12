#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op)
    {
        
        case'+':
        printf("result=%d",a+b);
        break;
        
        case'-':
        printf("result=%d",a-b);
        break;
        
        case'*':
        printf("result=%d",a*b);
        break;
        
        case'/':
        printf("result=%d",a/b);
        break;
        
        default:
        printf("invalid operator");
        
    }
    
    return 0;
}