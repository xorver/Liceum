//uklady pozycyjne
//np. uklad dziesietny, dwojkowy, szestnastkowysedxwfcegvgtevtg tge gef 
// int - -2^21 - 2^21-1 czyli 2^22
//long long 2^64
//schemat Hormera
#include <iostream>

using namespace std;

string dec2bin(int n)
{
string s;

while(n>0)
{
    char d=n%2 + '0';
    s=s+d;
    n=n/2;
}
return s;
}


main()
{
int n;
cin >> n;
cout << dec2bin(n) <<endl;


    system("pause");
}
