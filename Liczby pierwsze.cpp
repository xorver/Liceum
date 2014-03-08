#include <iostream>
using namespace std;

bool pierwsze(int x) //bool - typ logiczny ktory zwraca prawde lub falsz
{
     if(x%2==0 && x<2) //&& - koniunkcja
     return false;
     for(int i=3;i<x;i+=2)
     if(x%i==0)
     return false;
     return true;
}
main()
{
      for(int n=1; n<100; n++)
      if(pierwsze(n))
      cout << n << endl;
      
      system("pause");
}
