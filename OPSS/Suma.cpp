#include<cstdio>

int x,y;

long long suma(long long a)
{
if(a==0)
return 1;
else
if(a>0)
return (a*(a+1))/2;
else
if(a<0)
return ((((-a*(-a+1))/2)-1)*-1);
}

main()
{
scanf("%d",&x);

for(int i=0;i<x;i++)
{
scanf("%d",&y);
printf("%d \n",suma(y));
}

return 0;
}
