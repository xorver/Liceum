#include <iostream>
using namespace std;

main()
{
string a,b,c,xx;
int ile=0,ile2=0;
getline(cin,a);
getline(cin,b);

for(int i=0;i<b.size();i++)
if(b[i]==' ')
{
xx[ile]=b[i+1];
ile++;
}


c+=b[0];

for(int i=0;i<a.size();i++)
{
c+=a[i];
if(a[i]==' ')
{
c+=xx[ile2];
ile2++;
}
}

cout << c <<endl;

system("pause");
return 0;    
}
