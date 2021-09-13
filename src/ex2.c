#include <stdio.h>

int main()
{
    int a,b;
    printf("Give two integers: ");
    scanf("%d %d",&a,&b);
    printf("You entered %d and %d, their sum is %d \n",a,b,a+b);
    float c,d;
    printf("Give two floats: ");
    scanf("%f %f",&c,&d);
    printf("You entered %f and %f, their product is %f \n",c,d,c*d);
    char str[100];
    printf("Give a word: ");
    scanf("%s",str);
    printf("%s %s",str,str);
   

    return 0;
}
