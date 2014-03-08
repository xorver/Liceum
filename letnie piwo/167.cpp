#include<iostream>
using namespace std;


void dwaRzedy(int osoby[],int N)
{
int najwieksza,najmniejsza;
najwieksza=osoby[0];
najmniejsza=osoby[0];
for(int i=1;i<N;i++)
{
   if(najwieksza<osoby[i])
   najwieksza=osoby[i];
   if(najmniejsza>osoby[i])
   najmniejsza=osoby[i];
}
cout << najwieksza << " " << najmniejsza <<endl;
}

int main()
{
int N,*osoby;
cin >> N;

osoby=new int [N];

for(int i=0;i<N;i++)
cin >> osoby[i];

dwaRzedy(osoby, N);

delete [] osoby;

system("pause");    
return 0;
}
