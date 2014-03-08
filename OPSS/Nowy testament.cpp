#include<iostream>
using namespace std;

string alf, tab[134], slo;
int n;

main()
{
ios_base::sync_with_stdio(0);

cin >> alf;

for(int i=0,a=alf.size()-1;i<alf.size()/2 +1;i++,a--)
{
tab[alf[i]]=alf[a];
tab[alf[a]]=alf[i];
}

cin >> n;

for(int i=0;i<n;i++)
{
cin >> slo;
for(int x=0;x<slo.size();x++)
cout << tab[slo[x]];
cout <<endl;
}

return 0;
}
