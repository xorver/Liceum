#include<iostream>
#include<vector>
using namespace std;

int d,n,g;
unsigned long long wynik;
vector<int>tab;

void sumuj(int f)
{
if(n==2)
   wynik+=tab[0]+tab[1];
else
if((f+2)<n)
if(tab[f+2]<tab[f])
   sumuj(tab[f+2]);
else
{
   tab[f]+=tab[f+1];
   wynik+=tab[f];
   n--;
   tab.erase(f+1)
}
}


main()
{
ios_base::sync_with_stdio(0);

cin >> d;

for(int i=0;i<d;i++)
{
   cin >> n;
   for(int a=0;a<n;a++)
   {
      cin >> g;
      tab.push_back(g);
   } 
   
}
cout<<tab[0];
return 0;
}
