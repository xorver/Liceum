#include<cstdio>

int n,a,b;

main()
{
scanf("%d",&n);

for(int i=0;i<n;i++)
{
   scanf("%d %d",&a,&b);
   while (a != b)
    if (a > b)
      a-=b;
    else
      b-=a;
   printf("%d \n",a);
}
return 0;
}
