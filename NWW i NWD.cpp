#include <iostream>
using namespace std;

main()
{
int a,b,aa,bb;

cin >> a;
cin >> b;
aa=a, bb=b;
while(a!=b)
if(a>b) a=a-b;
else b=b-a;
cout << a << endl;
cout << (aa*bb)/b <<endl;



      system("pause");
}
