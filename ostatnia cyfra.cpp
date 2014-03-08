#include<iostream>
using namespace std;

int ostatnia(int x)
{
    return x%10;
}

int pierwsza(int x)
{
    while(x>9)
    x=x/10;
    return x;
}
int sumacyfr(int x)
{
int suma=0;
    while(x>0)
    {
              
              suma+=x%10; //suma=suma + x%10
              x=x/10;
    }
return suma;
}

int iloscpodzielnikow(int x)
{
int a=0;
    for(int i=x; i>0; i--)
    if(x%i==0)
    a++;
    
    return a;
}

main()
{
      int x;
      cin >> x;
      cout << "ostatnia " << ostatnia(x) << endl;
      cout << "pierwsza " << pierwsza(x) << endl;
      cout << "suma cyfr " << sumacyfr(x) << endl;
      cout << "ilosc podzielnikow " << iloscpodzielnikow(x) << endl;
      system("pause");
}
