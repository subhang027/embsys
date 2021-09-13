#include <stdio.h>

int main()
{
    int n;
    char ch;
    do
    {
        printf("Give a number: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            printf("%d \n",i);
        }
        
        printf("Run again (y/n)? ");
        scanf(" %c",&ch);
        
    }
    while(ch!='n');

    return 0;
}
