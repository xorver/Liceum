#include <iostream>
using namespace std;

int silnia(int a)
{
int s=1;
while (a>1);
      {
      s=s*a;
      a=a-1;
      }
return s;
}
main()
{
for(int i=1; i<10; i++)
cout<<i << " " << silnia(i)<<endl;
system("pause");
}
