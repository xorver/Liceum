#include<iostream>
using namespace std;

int d;
string n;

void wypisz(int a)
{
if(a%4==0)
cout<<"1"<<endl;
else
if(a%4==1)
cout<<"3"<<endl;
else
if(a%4==2)
cout<<"9"<<endl;
else
if(a%4==3)
cout<<"7"<<endl;
}

main()
{
ios_base::sync_with_stdio(0);

cin>>d;

for(int i=0;i<d;i++)
{
cin>>n;
if(n.size()==1)
wypisz(n[0]-'0');
else
wypisz((n[n.size()-2]-'0')*10+n[n.size()-1]-'0');

}

return 0;
}
