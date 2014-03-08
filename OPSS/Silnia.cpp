#include<cstdio>

main()
{
int n,s=1;

scanf("%d",&n);

if(n>4)
printf("0");
else
if(n<=1)
printf("1");
else
if(n==2)
printf("2");
else
if(n==3)
printf("6");
else
if(n==4)
printf("4");

return 0;
}
