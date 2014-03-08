#include<iostream>
using namespace std;

int n,h,tab[5000];

int abs(int a)
{
if(a>=0)
return a;
else
return -a;
}


main()
{
cin >> n;

for(int i=0;i<n;i++)
cin >> tab[i];

cin >> h;

sort(tab,tab+n);

for(int i=0;i<n;i++)
for(int a=i+1;a<n;a++)
if(abs(tab[i]-tab[a])<h)
cout << tab[i] <<" "<< tab[a] <<endl;



return 0;
}
