#include <iostream>
using namespace std;

int sumac(unsigned long long b)
{
int suma=0;
while(b>0)
{
suma+=b%10;
b=b/10;
}
return suma;
}

main()
{
unsigned long long a;
int b;
cin >> a;

b=sumac(a);
while(b>9)
b=(sumac(b));
cout << b <<endl;

    
      system("pause");
}

