#include<iostream>
using namespace std;

int podz (int x)
{int ile=0;
for (int i=1; i<=x; i= i+2)
{ if(x%i==0)
{
ile++;
}
}
return ile;
}

main()
{
int n,ilosc;

cin >> ilosc;


for(int i=0;i<ilosc;i++)
{
cin>>n;
cout<<podz(n)<<endl; 
}


system("pause");
}
