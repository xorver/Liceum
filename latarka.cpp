#include<cstdio>

int d,n,tab[10000],wynik=0,aaa;

int quick(int l, int p)
{
  int v=tab[(l+p)/2];
  int i,j,temp;
  i=l;
  j=p;
  do
  {
    while (tab[i]<v) i++;
    while (v<tab[j]) j--;
    if (i<=j)
    {
      temp=tab[i];
      tab[i]=tab[j];
      tab[j]=temp;
      i++;
      j--;
    }
  }
  while (i<=j);
  if (l<j) quick(l,j);
  if (i<p) quick(i,p);
}   



main()
{

scanf("%d",&d);

for(int i=0;i<d;i++)
{
scanf("%d",&n);
for(int j=0;j<n;j++)
   scanf("%d",&tab[j]);
quick(0,n-1);

wynik=0;
if(n!=1)
wynik+=tab[0]+tab[1];
else
wynik+=tab[0];

while(n>2)
{
if(n==3)
   wynik+=tab[2];
else
if(2*tab[1]<tab[n-2]+tab[0])   
   wynik+=2*tab[1]+tab[n-1]+tab[0];
else
   wynik+=2*tab[0]+tab[n-1]+tab[n-2];
n-=2;
}
if(n==2)
wynik-=tab[0];

printf("%d \n",wynik);



}

return 0;
}
