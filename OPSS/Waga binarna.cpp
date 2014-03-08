#include<iostream>

using namespace std;

long long n,x;


struct waga
{
long long pocz, przel, kon;
};

waga tab[20000];

void qsort(int lewy,int prawy)
{
   if(lewy<prawy)
   {
      int m=lewy;
      for(int i=lewy+1;i<=prawy;i++)
         if(tab[i].kon<tab[lewy].kon)
            swap(tab[++m],tab[i]);
      swap(tab[lewy],tab[m]);
      qsort(lewy,m-1);
      qsort(m+1,prawy);
   }
}


main()
{
ios_base::sync_with_stdio(0);



cin >> n;

for(int i=0;i<n;i++)
{
cin>>tab[i].pocz>>tab[i].przel;
x=tab[i].przel;
tab[i].kon=tab[i].pocz;
while(x!=10)
{
tab[i].kon*=2;
x++;
}
}
qsort(0,n-1);

for(int i=0;i<n-1;i++)
if(tab[i].kon==tab[i+1].kon)
if(tab[i].przel>tab[i+1].przel)
swap(tab[i],tab[i+1]);



for(int i=0;i<n;i++)
cout<<tab[i].pocz<<" "<<tab[i].przel<<endl;


return 0;
}
