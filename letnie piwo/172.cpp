#include <iostream>
using namespace std;

main()
{
string a;
string b;
cin>> a;
cin>> b;

int y;
int z;

y=a.size();
z=b.size();
int w;
w=y;
if(z<y)
w=z;
int r;
r=0;
for(int i=1;i<=w;i++)
 if(a[y-i]==b[z-i])
  r++;
 else
 break;
cout<<r;
system("pause");
}
