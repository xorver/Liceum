#include<iostream>
using namespace std;


int main()
{
string *zawolania,help;
int ilosc,x=0,y=0,*ktore_lepsze;

cin >> ilosc;
ktore_lepsze=new int [ilosc];

getline(cin,help);
zawolania=new string [ilosc];

for(int i=0;i<ilosc;i++)
getline(cin,zawolania[i]);

for(int i=0;i<ilosc;i++)
{
ktore_lepsze[i]=1;
for(int a=0;a<zawolania[i].size();a++)
if(zawolania[i][a]==' ')
ktore_lepsze[i]++;
}

x=ktore_lepsze[0];

for(int i=0;i<ilosc;i++)
if(x<ktore_lepsze[i])
{
x=ktore_lepsze[i];
y=i;
}

cout << zawolania[y] <<endl;

system("pause");    
return 0;
}
