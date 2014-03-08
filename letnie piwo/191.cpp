#include<iostream>
using namespace std;

string a,b,c="`";
int pom;


main()
{
cin >> a >> b;

if(a.size()<=b.size())
pom=a.size();
else
pom=b.size();

for(int i=0;i<pom;i++)
{
c[0]+=1;
cout << c << a[i] << b[i];
}
c[0]+=1;

if(a.size()!=b.size())
if(a.size()>b.size())
cout << c << a[a.size()-1];
else
cout << c << b[b.size()-1];



return 0;
}
