#include<iostream>
#include<cmath>
using namespace std;

double Potega(double Podstawa, double Wykladnik)
{
        return (exp(log(Podstawa)*Wykladnik));
}

main()
{
double a=200001.5;
//cout<<Potega(4,0.5)<<endl;
cout << a<<endl;
system("pause");
return 0;
}
