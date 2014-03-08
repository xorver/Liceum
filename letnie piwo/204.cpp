#include<iostream>
using namespace std;

int n,tab[100];

int main()
{
cin >> n;

for(int i=0;i<n;i++)
cin >>tab[i];

cout << tab[n-1]-tab[0];

return 0;
}
