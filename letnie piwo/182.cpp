#include<iostream>
using namespace std;


string a;
bool tab[26];

void wypisz()
{
for(int i=0;i<26;i++)
if(!tab[i])
{
   cout<<"NIE"<<endl;
   return;
}
cout<<"TAK"<<endl;
}

main()
{
getline(cin,a);

for(int i=0;i<a.size();i++)
{
if(a[i]==' ')
continue;
if(a[i]<91)
tab[a[i]-65]=true;
else
tab[a[i]-97]=true;
}

wypisz();

return 0;
}
