#include<iostream>
using namespace std;

int d,n;

string wynik(int a)
{
string g;
if(a==1)
   g+=1+'0';
else
if(a<=9)
{
   for(int i=1;i<=n;i++)
      g+=i+'0';
   for(int i=n-1;i>0;i--)
      g+=i+'0';
}
else
{
if(n%9!=0)
{   
   for(int i=0;i<n/9;i++)
   g+="123456790";
}
else
{
   for(int i=0;i<n/9-1;i++)
   g+="123456790";
}
   for(int i=0;i<(n-1)%9;i++)
      g+=i+1+'0';
   for(int i=n%9;i>=2;i--)
      g+=i+'0';
   for(int i=0;i<n/9-1;i++)
   g+="987654320";
   g+="987654321";

}
return g;
}


main()
{
ios_base::sync_with_stdio();

cin >>d;

for(int i=0;i<d;i++)
{
cin >> n;
cout << wynik(n)<<"\n";
}



return 0;
}
