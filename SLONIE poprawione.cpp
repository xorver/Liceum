#include<iostream>
using namespace std;

bool czy_jest_ok(int pocz[],int kon[], int n)
{
for(int i=0;i<n;i++)
        if(pocz[i]!=kon[i])
        return true;
return false;   
     
}

main()
{
int *waga,*nr_p,*nr_k,n,suma_koncowa=0;

cin >> n;

waga=new int [n];
nr_p=new int [n];
nr_k=new int [n];

for(int i=0;i<n;i++)
cin >> waga[i];

for(int i=0;i<n;i++)
cin >> nr_p[i];

for(int i=0;i<n;i++)
cin >> nr_k[i];
      
while(czy_jest_ok(nr_p,nr_k,n))
{
        int najmniejsza=waga[0], najmniejsza_w;
        for(int i=0;i<n;i++)
        {
                int v;
                v=0;
                
                for(int f=0;f<n;f++)
                if(nr_p[f]==i+1)
                {
                v=f;
                break;
                }
                
                if(waga[i] <= najmniejsza && nr_p[v] != nr_k[v])
                {
                           najmniejsza=waga[i];
                           najmniejsza_w=v;
                }
        }

        for(int i=0;i<n;i++)
        {
                int do_zamiany;
                if(nr_k[najmniejsza_w] == nr_p[i])
                {
                  suma_koncowa+=waga[nr_p[najmniejsza_w]-1] + waga[nr_k[najmniejsza_w]-1];
                  do_zamiany = nr_p[najmniejsza_w];
                  nr_p[najmniejsza_w]=nr_p[i];
                  nr_p[i]=do_zamiany;
                  break;
                }
        }   
}

cout << suma_koncowa<<endl;

delete [ ] nr_p;
delete [ ] nr_k;
delete [ ] waga;
system("pause");
return 0;     
}


