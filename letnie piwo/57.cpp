//Tomasz Lichoñ 1D

#include<iostream>
#include<cmath>
using namespace std; 

double zaokraglanie(double a)
{
int b;
b=(int) a;
a-=b;
cout.precision(6);
a+=b;
return a;

}

main()
{
int a,b,c;
double delta;
cin >> a >> b >> c;
delta=b*b-4*a*c;

if(delta==0)
cout << zaokraglanie(-b/2*a) <<endl;
else
if(delta<0)
cout << "BRAK" <<endl;
else
if(delta>0)
{
cout << zaokraglanie((-b - sqrt(delta)) / 2*a) << endl;
cout << zaokraglanie((-b + sqrt(delta)) / 2*a) << endl;
}
       

system("pause");
return 0;
}
