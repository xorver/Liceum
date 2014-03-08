#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

void jesli_rowne(int dx,int dy, int n)
{
if((dx+dy)%(n+n)==0)
printf("TAK\n");
else
printf("NIE\n");
}

int NWD( int x, int y )
{
  int r;
  do
  {
    r = x % y;
    x = y;
    y = r;
  }
  while( y );
  return x;
}


main()
{
int t,n,k,x1,x2,y1,y2,dx,dy;


scanf("%ld",&t);

for(int i=0;i<t;i++)
{
scanf("%d %d %d %d %d %d",&k,&n,&x1,&y1,&x2,&y2);
k=abs(k);
n=abs(n);

if(n<k)    //n zawsze wieksze
swap(n,k);

dx=abs(x1-x2);
dy=abs(y1-y2);

if(x1==x2 && y1==y2)
{
printf("TAK\n");
}
else
if(n==k && n!=0)
jesli_rowne(dx,dy,n);
else
if(n==k && n==0)
printf("NIE\n");
else
if(n!=k && k==0)
{
if(dx%n==0 && dy%n==0)
printf("TAK\n");
else
printf("NIE\n");
}
else
if(n!=k && n+k%2==1)
printf("TAK\n");
else
{
jesli_rowne(dx,dy,NWD(n,k));
}
}

return 0;
}
