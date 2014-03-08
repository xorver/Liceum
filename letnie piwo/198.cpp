#include<iostream>
using namespace std;

int n,wynik;
unsigned long long a;

void zmniejsz()
{
while(a%2==0)
a/=2;
}


main()
{
cin >> n;

for(int i=0;i<n;i++)
{
cin >> a;
wynik=2;
zmniejsz();

int j;
j=2;
for(j=2;j*j<a;j++)
{
   if(a%j==0)
   wynik+=2;
}
if(j*j==a)
wynik++;

if(a==1)
wynik--;

cout << wynik <<endl;

}


return 0;
}
