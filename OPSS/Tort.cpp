#include<iostream>
#include<cmath>
using namespace std;

int c,wynik2=0;
double delta,wynik;
unsigned long long n;

main()
{
ios_base::sync_with_stdio(0);

cin >> c;

for(int i=0;i<c;i++)
{
cin >> n;

if(n<2)
{
cout<< "0"<<endl;
continue;
}

wynik=(sqrt(1+8*n)-1)/2;
wynik2=wynik;



cout<<wynik2<<endl;

cout<<wynik<<endl<<endl;

}



return 0;
}
