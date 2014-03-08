#include <iostream>
using namespace std;

main()
{
int a=0;

for(int i=1000;i>100;i--)
{
if(i%7==0 || i%9==0)
{
cout << i <<endl;
a++;
}
if(a==25)
break;
}
    
      system("pause");
}

