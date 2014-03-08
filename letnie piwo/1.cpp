#include <iostream>
using namespace std;

int sumap(int x)
{
int suma=0;
 for(int i=1;i<x;i++)
  if(x%i==0)
  suma+= i;
return suma;

}

main()
{
      for(int n=1; n<10000;n++)
       if(sumap(n)==n)
       cout << n << endl;
      system("pause");
}
