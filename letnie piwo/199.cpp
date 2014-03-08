#include<iostream>
using namespace std;

int n,wynik;
unsigned long long a;


main()
{
cin >> n;

for(int i=0;i<n;i++)
{
cin >> a;

if(a==0)
wynik++;

while(a%2==1)
a/=2;

if(a!=0)
wynik++;

}

cout << wynik <<endl;

return 0;
}
