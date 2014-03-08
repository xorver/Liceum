#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

double tab[2000000];

double Potega(double Podstawa, double Wykladnik)
{
        return (exp(log(Podstawa)*Wykladnik));
}

void wypelnij()
{
tab[0]=0;
for(int i=1;i<2000000;i++)
tab[i]=log2(i);
}


main ()
{
int t,n,k;
scanf("%d", &t);

double wynik=0;

wypelnij();

for(int i=0;i<t;i++)
{
scanf("%d %d", &n, &k); //n-ile razy rzuca , k-ilosc oczek
wynik=0;

wynik-=n*tab[6];

for(int i=1;i<=n+k-2;i++)
{

   wynik+=tab[i];
   if(n-1>=i)
   wynik-=tab[i];
   if(i<=k-1)
   wynik-=tab[i];
}


if((k/6)!=0)
printf("%lf", Potega(2,wynik));
cout<<" "<<n<<" "<<k<<" "<<wynik<<endl;
cout << log2(x+1)<<" "<<x;

}






return 0;
}
