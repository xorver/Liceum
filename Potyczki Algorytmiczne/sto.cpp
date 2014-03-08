#include<cstdio>
#include<iostream>


main()
{
int n,k,s,pud[1000],ile,wynik=0;


scanf("%d %d %d", &n, &k, &s);

for(int i=0;i<n;i++)
scanf("%d", &pud[i]);

ile=k*s;

std::sort(pud, pud+n);

int a=n-1;

while(ile>0)
{
ile-=pud[a];
a--;
wynik++;
}

printf("%d", wynik);

return 0;
}
