#include<cstdio>

main()
{
int n;

scanf("%d", &n);

int wynik=n;

for(int i=2;i*i<=n;i++)
wynik+=n/i - i+1;

printf("%d", wynik);

return 0;
}
