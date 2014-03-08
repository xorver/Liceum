#include<cstdio>

int pierw[15000],c,n;

bool pierwsze(int x)
{
     if((x%2==0 && x!=2) || x<2)
     return false;
     for(int i=3;i*i<=x;i+=2)
     if(x%i==0)
     return false;
     return true;
}

void wypelnij()
{
int ile=0;
for(int i=1;ile<15000;i++)
if(pierwsze(i))
{
pierw[ile]=i;
ile++;
}
}

main()
{
wypelnij();

scanf("%d",&c);

for(int i=0;i<c;i++)
{
scanf("%d",&n);
printf("%d \n",pierw[n-1]);
}




return 0;      
}
