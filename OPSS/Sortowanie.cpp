#include<iostream>
using namespace std;

int ciag[1000],n,k,wynik=0;

main()
{
ios_base::sync_with_stdio(0);

cin >> n;

for(int i=0;i<n;i++)
cin >> ciag[i];

for(int i=0;i<n-1;i++)
{
for(int a=i;a<n;a++)
if(ciag[i]>ciag[a])
wynik++;
}

cout<<wynik;

return 0;
}
