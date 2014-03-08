#include<cstdio>

int c,n,a,wynik=0;

main()
{
scanf("%d", &c);

for(int i=0;i<c;i++)
{
scanf("%d",&n);
wynik=0;
for(int j=0;j<n;j++)   
{
scanf("%d",&a);
wynik+=a;
}
printf("%d \n",wynik);
}


return 0;      
}
