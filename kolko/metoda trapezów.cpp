#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

double F(double x)
{
	return x*x-sqrt(x);
}

double pole(double a,double b, int N)
{
double h= (b-a)/N,suma=0;
for(int i=0;i<N;i++)
suma+=F(a+i*h)+F(a+(i+1)*h);

return suma*h/2;
}

int main()
{
cout.precision(15);
for(int N=1000;N<=1000000000;N=N*10)
cout << pole(0,1,N)<<endl;
system("pause");
return 0;
}
