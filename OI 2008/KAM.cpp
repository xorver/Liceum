//Tomasz Lichoñ

#include<iostream>
using namespace std;


void tak_czy_nie(int kamienie[],int ilosc)
{
int j=1;
for(int i=0;i<ilosc;i+=2)
if(i+1==ilosc)
{
if(kamienie[i]-kamienie[i-1]==1)
j=-j;
else
break;              
}
else
if(kamienie[i]==kamienie[i+1])
continue;
else
j=-j;

if(j==1)
cout << "NIE" <<endl;
else
cout << "TAK" <<endl;
     
}


main()
{
ios_base::sync_with_stdio(0);
int u,n,**kamienie,*ilosc_kupek;
cin >> u;

kamienie=new int *[u];
ilosc_kupek=new int[u];
for(int i=0;i<u;i++)
{
cin >> n;
ilosc_kupek[i]=n;
kamienie[i]=new int [n];
for(int a=0;a<n;a++)
cin >> kamienie[i][a];
}

for(int i=0;i<u;i++)
tak_czy_nie(kamienie[i],ilosc_kupek[i]);


delete [] kamienie;
system("pause");
return 0;     
}
