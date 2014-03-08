#include<cstdio>

int n,c,m;
unsigned long long x;



unsigned long long suma(int d)
{
unsigned long long gg=1;
int i=2;
gg=1;
gg+=d;
for(;i*i<d;i++)
if(d%i==0)
   gg+=i+d/i;

if(i*i==d)
gg+=i;

return gg;
}




main()
{
scanf("%d %d",&c,&m);


for(int i=0;i<c;i++)
{
   scanf("%d",&n);
   printf("%d \n",suma(n)%m);
}

return 0;
}
