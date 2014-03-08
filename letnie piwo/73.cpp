#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double F(double x)
{
   return 1/x;
}

double dlugosc()
{
   double odcinek=1/1000000,wynik=0;
   for(int i=0;i<1000000;i++)
   {
      double x1=1+i*odcinek;
      double x2=x1+odcinek;
      wynik+=sqrt((x1-x2)*(x1-x2)+(F(x1)-F(x2))*(F(x1)-F(x2)));
   }   
   return wynik;
}

int main()
{
cout.precision(12);
cout << dlugosc();

system("pause");

return 0;
}
