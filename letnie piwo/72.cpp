#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double F(double x)
{
   return pow(x,8)+x*x-1;
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
cout.precision(12);
cout << bisekcja(0.5,1,1e-12);

return 0;
}
