#include<iostream>
using namespace std;

int d,m,suma;

bool sprawdz()
{
if(m==0 || m>12 || d==0 || (m==1 && d>31) || (m==2 && d>28) || (m==3 && d>31) || (m==4 && d>30) || (m==5 && d>31) || (m==6 && d>30)
|| (m==7 && d>31) || (m==8 && d>31) || (m==9 && d>30) || (m==10 && d>31) || (m==11 && d>30) || (m==12 && d>31))
return false;
return true;
}


void zlicz(int a)
{
if(a>=0)
suma=0;
if(a>=1)
suma+=31;
if(a>=2)
suma+=28;
if(a>=3)
suma+=31;
if(a>=4)
suma+=30;
if(a>=5)
suma+=31;
if(a>=6)
suma+=30;
if(a>=7)
suma+=31;
if(a>=8)
suma+=31;
if(a>=9)
suma+=30;
if(a>=10)
suma+=31;
if(a>=11)
suma+=30;
}


main()
{
cin >> d >> m;



if(sprawdz())
{
zlicz(m-1);
suma+=d;
if(suma%7==0)
cout << "MERCREDI" <<endl;
else
if(suma%7==1)
cout << "JEUDI" <<endl;
else
if(suma%7==2)
cout << "VENDREDI" <<endl;
else
if(suma%7==3)
cout << "SAMEDI" <<endl;
else
if(suma%7==4)
cout << "DIMANCHE" <<endl;
else
if(suma%7==5)
cout << "LUNDI" <<endl;
else
if(suma%7==6)
cout << "MARDI" <<endl;
}
else
cout << "INCORRECT" <<endl;

return 0;
}

