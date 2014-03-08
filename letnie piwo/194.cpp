#include<iostream>
using namespace std;

string a;
int ile;


void wypisz(int x)
{
for(int i=x;i<a.size();i++)
if(a[i]=='b')
{
cout << "PASUJE" <<endl;
return;
}
cout << "NIE PASUJE" << endl;
}

main()
{
cin >> a;

ile=a.size();
for(int i=0;i<a.size();i++)
if(a[i]=='a')
{
ile=i+1;
break;
}

wypisz(ile);

return 0;
}
