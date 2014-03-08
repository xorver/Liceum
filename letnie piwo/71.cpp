#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double F(double x)
{
   return x-tan(x);
}

double bisekcja(double a, double b, double dokladnosc)
{
   while((b-a)/2>dokladnosc)
   {
      double tmp=(a+b)/2;
      if(F(a)*F(tmp)<0)
         b=tmp;
      else
         a=tmp;
   }
   return (a+b)/2;
}

int main()
{
cout.precision(9);
cout << bisekcja(M_PI/2,(3*M_PI)/2,1e-8);

return 0;
}
