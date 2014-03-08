//Tomasz Lichoñ

#include<iostream>
using namespace std;


int main()
{
ios_base::sync_with_stdio(0);

int n, m;      //n-pionowe numerowane w prawo, m-poziome numerowane w dol
int **w_zabytkow, **w_posterunkow, **wynik_koncowy;
int z, p, odl_1;
cin >> n >> m >> z >> p;


w_zabytkow=new int *[z];
w_posterunkow=new int *[p];
wynik_koncowy=new int *[p];

for(int i=0;i<z;i++)
w_zabytkow[i]=new int [2];

for(int i=0;i<p;i++)
{
w_posterunkow[i]=new int [4];
wynik_koncowy[i]=new int [3];
}

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
int odl_1, odl_2;


if(w_posterunkow[a][0]>=w_zabytkow[i][0])
odl_1=w_posterunkow[a][0]-w_zabytkow[i][0];
else
odl_1=w_zabytkow[i][0]-w_posterunkow[a][0];

if(w_posterunkow[a][1]>=w_zabytkow[i][1])
odl_1+=w_posterunkow[a][1]-w_zabytkow[i][1];
else
odl_1+=w_zabytkow[i][1]-w_posterunkow[a][1];


if(w_posterunkow[a][2]>=w_zabytkow[i][0])
odl_2=w_posterunkow[a][2]-w_zabytkow[i][0];
else
odl_2=w_zabytkow[i][1]-w_posterunkow[a][2];

if(w_posterunkow[a][3]>=w_zabytkow[i][1])
odl_2+=w_posterunkow[a][3]-w_zabytkow[i][1];
else
odl_2+=w_zabytkow[i][1]-w_posterunkow[a][3];

wynik_koncowy[a][0]=0; 
wynik_koncowy[a][1]=0; 
wynik_koncowy[a][2]=0;

if(odl_1<odl_2)
wynik_koncowy[a][0]+= 1;
else
if(odl_1>odl_2)
wynik_koncowy[a][1]+= 1;
else
if(odl_1==odl_2)
wynik_koncowy[a][2]+= 1;
}

for(int i=0;i<p;i++)
cout << wynik_koncowy[i][0] << " " << wynik_koncowy[i][1] << " " << wynik_koncowy[i][2] <<endl;


for (int i=0; i<z; i++)
delete [] w_zabytkow[i];
delete [] w_zabytkow;

for (int i=0; i<p; i++)
{
delete [] w_posterunkow[i];
delete [] wynik_koncowy[i];
}
delete [] w_posterunkow;
delete [] wynik_koncowy;

system("pause");
return 0;     
}
