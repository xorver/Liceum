#include<cstdio>



main()
{
int fib[46],d,n;

fib[0]=1;
fib[1]=1;
for(int i=2;i<46;i++)
fib[i]=fib[i-1]+fib[i-2];

scanf("%d", &d);

for(int i=0;i<d;i++)
{
scanf("%d", &n);
printf("%d \n", fib[n]);
}

return 0;
}
