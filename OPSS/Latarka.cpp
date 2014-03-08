#include<cstdio>
#include<algorithm>

int d,n,tab[10000],wynik=0;

void qsort(int lewy,int prawy)
{
   if(lewy<prawy)
   {
      int m=lewy;
      for(int i=lewy+1;i<=prawy;i++)
         if(tab[i]<tab[lewy])
            std::swap(tab[++m],tab[i]);
      std::swap(tab[lewy],tab[m]);
      qsort(lewy,m-1);
      qsort(m+1,prawy);
   }
}





main()
{

scanf("%d",&d);

for(int i=0;i<d;i++)
{
scanf("%d",&n);
for(int j=0;j<n;j++)
   scanf("%d",&tab[j]);
qsort(0,n-1);

wynik=0;
wynik+=tab[0]+tab[1];

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
