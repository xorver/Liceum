#include<iostream>
using namespace std;

main()
{
int a,b;
cin >> a;

while(a>0)
{
          b=a%10;
          a=a/10;
          cout << b;
}
cout << endl;
 system("pause");
 return 0;
}
