#include<iostream>
using namespace std;

main()
{
int a,k,ile=0,i=0;
int tab[50];
cin >> k >>a;

while(k>0)
{
if(k%2==0)
tab[ile]=0;
else
tab[ile]=1;
k=k/2;
ile++;
}

if(tab[50-a]==1)
cout<< "TAK" <<endl;
else
cout<< "NIE" <<endl;



system("pause");
return 0;
}
