#include <stdio.h>

float max(float a,float b)
{
if(a>b)
{
    return a;
}
else
{
    return b;
}
    
}
float min(float a,float b)
{
if(a<b)
{
    return a;
}
else
{
    return b;
}
    
}
float mins(float a,float b,float c,float d)
{
int x=min(a,b);
int y=min(x,c);
int z=min(y,d);

return z;
    
}
float maxs(float a,float b,float c,float d)
{
int x=max(a,b);
int y=max(x,c);
int z=max(y,d);

return z;
    
}

float sum(float a,float b,float c,float d)
{
return a+b+c+d;
}
float mean(float a,float b,float c,float d)
{
 
float x=a+b+c+d;
return x/4;
}
int main()
{
   float a,b,c,d;
   printf("Give four floats: ");
   scanf("%f %f %f %f",&a,&b,&c,&d);
   
   float w,x,y,z;
   w=mins(a,b,c,d);
   x=maxs(a,b,c,d);
   y=sum(a,b,c,d);
   z=mean(a,b,c,d);
   
   printf("min: %f \n",w);
   printf("max: %f \n",x);
   printf("sum: %f \n",y);
   printf("mean: %f \n",z);
     
    return 0;
}
