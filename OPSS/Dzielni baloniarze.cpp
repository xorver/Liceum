#include<iostream>
using namespace std;

int liczby[10],rozklad[10000],k,wynik=1;

void rozkl()
{
for(int i=0;i<10;i++)
{
k=2;
while(liczby[i]>1)
if(liczby[i]%k==0)
{
liczby[i]/=k;
rozklad[k]++;
}
else
k++;
}
}

main()
{
ios_base::sync_with_stdio(0);

for(int i=0;i<10;i++)
cin>>liczby[i];

rozkl();

for(int i=0;i<10000;i++)
if(rozklad[i]>0)
wynik=(wynik * (rozklad[i]+1))%10;

cout<<wynik;

return 0;
}
