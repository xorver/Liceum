#include<iostream>
using namespace std;

int n,a,b,c=0,x=0,y=0,z=0,p;

main()
{
ios_base::sync_with_stdio(0);

cin >> n;

cin >> x >> y;


p=(x+y)%10;
if(n==1)
cout<< x+y;
else
{
for(int i=0;i<n-1;i++)
{
cin >> a >> b;
if(a+b!=9)
{
   if(z>0)
   {
      cout<<p+(a+b)/10;
      if(a+b>9)
      for(int i=0;i<z;i++,cout<<"0");
      else
      for(int i=0;i<z;i++,cout<<"9");
   }
   else
   cout << (x+y+(a+b)/10)%10;
   z=0;
}
else
{
   z++;
   if(x+y!=9)
   p=(x+y)%10;
}
x=a;
y=b;
}

if(z>0)
   {
      cout<<p+(a+b)/10;
      if(a+b>9)
      for(int i=0;i<z;i++,cout<<"0");
      else
      for(int i=0;i<z;i++,cout<<"9");
   }
else
cout << (a+b)%10;
}

return 0;
}
