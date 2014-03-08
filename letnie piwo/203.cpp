#include<iostream>
using namespace std;

int tab[4];

int main()
{
cin >> tab[0]>>tab[1]>>tab[2]>>tab[3];

sort(tab,tab+4);

cout << tab[3];

return 0;
}
