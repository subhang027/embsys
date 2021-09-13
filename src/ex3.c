#include <stdio.h>

int main()
{
    int a,b,x,y,z;
    printf("Give an integer: ");
    scanf("%d",&a);
    if(a==0)
    {
    printf("The number you entered is equal to zero \n");
    }
    else
    {
       printf("The number you entered does not equal zero \n");  
    }
    float c,d;
    printf("Give two floats: ");
    scanf("%f %f",&c,&d);
    if(c>d)
    {
    printf("%f is the largest \n",c);
    }
    else
    {
        printf("%f is the largest \n",d);
    }
    
    printf("Give an integer: ");
    scanf("%d",&b);
    if(b%2==0)
    {
    printf("Result is: %d \n",b/2);
    }
    else
    {
       printf("Result is: %d \n",b*3);  
    }
    
    printf("Give three integers: \n");
    scanf("%d %d %d",&x,&y,&z);
    if(x!=y && y!=z)
    {
    printf("All are unique \n");
    }
    else
    {
       printf("Not unique \n");  
    }
    
   

    return 0;
}
