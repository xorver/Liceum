#include<iostream>
using namespace std;

string a;

main()
{
cin >> a;

cout<<a[0];

for(int i=1;i<a.size();i++)
{
if(a[i-1]!=a[i])
cout<<endl;
cout<<a[i];
}

return 0;
}
