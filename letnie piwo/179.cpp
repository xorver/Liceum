#include<iostream>
using namespace std;

int n,k,tab[1000],spr,nr[1];

main()
{
cin >> n >> k;

for(int i=0;i<n;i++)
cin >> tab[i];

spr=k;

for(int i=0;i<n;i++)
for(int a=i+1;a<n;a++)
if(k-(tab[i]+tab[a])<spr && k-(tab[i]+tab[a])>=0)
{
spr=k-(tab[i]+tab[a]);
nr[0]=i;
nr[1]=a;
}

if(tab[nr[0]]<tab[nr[1]])
cout << nr[0]+1 <<" "<<nr[1]+1 <<endl;
else
cout << nr[1]+1 <<" "<<nr[0]+1 <<endl;

return 0;     
}

