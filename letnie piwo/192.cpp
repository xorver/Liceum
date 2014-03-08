#include<iostream>
using namespace std;

string a;
int ile=0;

main()
{
getline(cin,a);

for(int i=0;i<a.size();i++)
if(a[i]==' ')
{
cout << ile <<" ";
ile=0;
}
else
ile++;

cout << ile;

return 0;
}
