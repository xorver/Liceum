#include <iostream>
using namespace std;

main()
{
int a,b,c,d;
cin >> a >> b >> c;
cout <<endl;
if(a>b && a>c)
   {
   cout << a <<endl;
   d=a;
   }
   else
      if(b>a && b>c)
      {
      cout << b <<endl;
      d=b;
      }
      else
         {
         cout << c <<endl;
         d=c;
         }
if(a==d && b>c)
cout << b << endl << c <<endl;
else
   if(a==d && c>b)
   cout << c << endl << b <<endl;

if(b==d && a>c)
cout << a << endl << c <<endl;
else
   if(b==d && c>a)
   cout << c << endl << a <<endl;
   
if(c==d && a>b)
cout << a << endl << b <<endl;
else
   if(c==d && b>a)
   cout << b << endl << a <<endl;

      system("pause");
      return 0;
}
