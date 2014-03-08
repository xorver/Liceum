#include<iostream>
using namespace std;

int n,tab[5000],naj,d;

main()
{
cin >> n;

cin >> tab[0];
naj=tab[0];

for(int i=1;i<n;i++)
{
cin >> tab[i];
if(tab[i]>naj)
naj=tab[i];
}

cin >> d;

sort(tab,tab+n);

for(int i=0;i<n;i++)
if(naj-tab[i]<=d)
cout << tab[i]<<endl;

return 0;
}
