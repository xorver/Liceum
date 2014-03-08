#include<iostream>
using namespace std;

int k1,k2,wynik=0;
string a,b,im1,im2,naz1,naz2,c,d;


main()
{
cin >> k1 >> k2;



for(int i=0;i<k1;i++)
{
cin >> a >> b;
im1+=a[0];
naz1+=b[0];
}

for(int h=0;h<k2;h++)
{
cin >> c >> d;
im2+=c[0];
naz2+=d[0];
}


for(int i=0;i<k1;i++)
for(int x=0;x<k2;x++)
if(im1[i]==im2[x] && naz1[i]==naz2[x])
wynik++;


cout << wynik <<endl;


return 0;
}
