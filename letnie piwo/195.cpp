#include<iostream>
#include<algorithm>
using namespace std;

int n,tab[1000],ile=0;

struct powt
{
int ilo,licz;
};

powt tab2[1000];


void bubble()
{
for(int l=ile;l>1;l--)
   for(int k=0; k<=l-2;k++)
   if(tab2[k].ilo>tab2[k+1].ilo)
   swap(tab2[k],tab2[k+1]);
}





main()
{
cin >> n;

for(int i=0;i<n;i++)
cin >> tab[i];

sort(tab,tab+n);

for(int i=1;i<n;i++)
if(tab[i]==tab[i-1])
{
tab2[ile].licz=tab[i];
tab2[ile].ilo++;
if(tab[i+1]!=tab[i])
ile++;
}

bubble();

for(int i=0;i<ile;i++)
cout << tab2[i].licz <<endl;



return 0;
}
