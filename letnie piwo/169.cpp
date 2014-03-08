#include<iostream>
using namespace std;

string a,b,c;

main()
{
getline(cin,a);


for(int i=1;i<a.size();i++)
{
   b+=a[i];
   if(a[i]==' ')
   i++;
}

for(int i=0;i<a.size()-1;i++)
if(a[i+1]!=' ')
c+=a[i];

cout<< b <<endl<< c <<endl;

return 0;
}
