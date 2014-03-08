#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;


int a,b,c,h;
double wynik;
int main()
{

cout.setf(ios::fixed); 
cin >>a>>b>>c>>h;
wynik=h + sqrt((a+b)*(a+b)+c*c);
cout <<setprecision(2)<< wynik;

return 0;
}
