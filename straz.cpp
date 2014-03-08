#include<iostream>
using namespace std;


main()
{
unsigned long long n, m;      //n-pionowe numerowane w prawo, m-poziome numerowane w dol

int z, p, odl_1;
cin >> n >> m >> z >> p;
int w_zabytkow[z][2], w_posterunkow[p][4], wynik_koncowy[p][3];


for(int i=0;i<p;i++)
{
wynik_koncowy[i][0]=0; 
wynik_koncowy[i][1]=0; 
wynik_koncowy[i][2]=0;
}

for(int i=0;i<z;i++)
cin >> w_zabytkow[i][0] >> w_zabytkow[i][1];

for(int i=0;i<p;i++)
cin >> w_posterunkow[i][0] >> w_posterunkow[i][1] >> w_posterunkow[i][2] >> w_posterunkow[i][3];

for(int a=0;a<p;a++)
for(int i=0;i<z;i++)
{
unsigned long long odl_1, odl_2;
odl_1=0;
odl_2=0;

if(w_zabytkow[i][0]>w_posterunkow[a][0])
odl_1+= w_zabytkow[i][0] - w_posterunkow[a][0];
else
odl_1+= w_posterunkow[a][0] - w_zabytkow[i][0];

if(w_zabytkow[i][1]>w_posterunkow[a][1])
odl_1+= w_zabytkow[i][1] - w_posterunkow[a][1];
else
odl_1+= w_posterunkow[a][1] - w_zabytkow[i][1];

if(w_zabytkow[i][0]>w_posterunkow[a][2])
odl_2+= w_zabytkow[i][0] - w_posterunkow[a][2];
else
odl_2+= w_posterunkow[a][2] - w_zabytkow[i][0];

if(w_zabytkow[i][1]>w_posterunkow[a][3])
odl_2+= w_zabytkow[i][1] - w_posterunkow[a][3];
else
odl_2+= w_posterunkow[a][3] - w_zabytkow[i][1];

if(odl_1<odl_2)
wynik_koncowy[a][0]+= 1;
if(odl_1>odl_2)
wynik_koncowy[a][1]+= 1;
if(odl_1==odl_2)
wynik_koncowy[a][2]+= 1;
}

for(int i=0;i<p;i++)
cout << wynik_koncowy[i][0] << " " << wynik_koncowy[i][1] << " " << wynik_koncowy[i][2] <<endl;

system("pause");
return 0;     
}
