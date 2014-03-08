#include<iostream>
using namespace std;

int tab[3];

int main()
{
cin >>tab[0]>>tab[1]>>tab[2];

sort(tab,tab+3);

for(int i=0;i<3;i++)
cout << tab[i] <<" ";


return 0;
}
