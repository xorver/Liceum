#include <iostream>
using namespace std;

main()
{
int a,b,c;
cin >> a >> b >> c;
cout << endl;
if(a>b && a>c)
cout << a <<endl;
else
if(b>a && b>c)
cout << b <<endl;
else
if(c>a && c>b)
cout << c <<endl;

      system("pause");
      return 0;
}
