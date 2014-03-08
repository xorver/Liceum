#include<cstdio>

int n,x,y;

int potega(int a, int b) 
{
long wynik = 1;
for (int i = b; i > 0; i--)
wynik *= a;

return wynik;
}

main()
{
scanf("%d",&n);

for(int i=0;i<n;i++)
{
scanf("%d %d",&x,&y);
printf("%d \n",potega(x,y));
}


return 0;      
}
