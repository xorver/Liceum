#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double F(double x)
{
return x-cos(x);
}

double bisekcja(double a,double b, double dokladnosc)
{
while((b-a)/2 > dokladnosc)
{
cout << a<<" " <<b<<endl;
double c =(a+b)/2;
if(F(a)*F(c) <0) 
b=c;
else
a=c;
}
return (a+b)/2;
}

int main()
{
cout.precision(15);
cout << bisekcja(0,M_PI/2,1e-10);
	
system("pause");
return 0;
}
