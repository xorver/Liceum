#include<iostream>
using namespace std;

string a;

main()
{
cin >> a;

if(a.size()%2==0)
for(int i=a.size()-2;i>=0;i-=2)
cout << a[i] << a[i+1];
else
{
for(int i=a.size()-2;i>a.size()/2;i-=2)
cout << a[i] << a[i+1];

if((a.size()/2)%2==1)
{
cout << a[a.size()/2-1] << a[a.size()/2] << a[a.size()/2+1];

for(int i=a.size()/2-3;i>=0;i-=2)
cout << a[i] << a[i+1];

}
else
{
cout << a[a.size()/2];

for(int i=a.size()/2-2;i>=0;i-=2)
cout << a[i] << a[i+1];
}

}



return 0;
}
