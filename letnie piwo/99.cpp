//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;

main()
{
int a;
long long b=1;
cin >> a;

while(a>0)
{
b=b*2;
a--;
while(b>1000000000)
b=b/10;
}
while(b>9)
b=b/10;
cout << b <<endl;
 
system("pause");
return 0;
}
