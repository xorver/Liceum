#include<iostream>
using namespace std;

int n,tab1[1000],tab2[1000],porownanie,nr;

main()
{
cin >> n;

for(int i=0;i<n;i++)
{
   cin >> tab1[i];
   tab2[i]=tab1[i];
}

sort(tab1,tab1+n);;

porownanie=tab1[1]-tab1[0];
nr=1;

for(int i=2;i<n;i++)
if(tab1[i]-tab1[i-1]<porownanie)
{
porownanie=tab1[i]-tab1[i-1];
nr=i;
}


for(int i=0;i<n;i++)
if(tab2[i]==tab1[nr-1])
{
cout << i+1 <<endl;
break;
}

for(int i=0;i<n;i++)
if(tab2[i]==tab1[nr])
{
cout << i+1 <<endl;
break;
}


return 0;
}
