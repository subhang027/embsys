#include <stdio.h>

int main()
{
    printf("Even numbers between 0 and 40: \n");
    for(int i=0;i<=40;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    printf("\n");
    
    printf("Numbers 1 to 100: \n");
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }
    
    int n;
    while(1)
    {
    printf("Give a number: ");
    scanf("%d",&n);
    if(n!=0)
    {
    printf("The square of %d is %d \n",n,n*n);
    }
    else
    {
        printf("You entered zero \n");
        break;
    }
    
    }
   
    
    return 0;
}
