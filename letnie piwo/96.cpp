//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;


main()
{
int a,b=0;
long long s=1;
cin >> a;


while (a>1)
      {
      s=s*a;
      a=a-1;
      while(s%10==0)
      {
      s=s/10;
      b++;
      }
      if(s%1000000000!=0)
      s=s%1000000000;
      }


cout << b <<endl;

system("pause");
return 0;     
}
