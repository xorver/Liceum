#include<iostream>
using namespace std;


main()
{
int n;
cin >> n;
int waga[n],nr_p[n],nr_k[n],suma_koncowa=0;  //waga kazdego slonia 100<i<6500 i ich numery

for(int i=0;i<n;i++)
cin >> waga[i];

for(int i=0;i<n;i++)
cin >> nr_p[i];

for(int i=0;i<n;i++)
cin >> nr_k[i];
      
while(1)
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
        
        for(int i=0;i<n;i++)
        if(nr_p[i]!=nr_k[i])
        break;
        else
        if(i==n-1)
        goto koniec;
}
koniec:
cout << suma_koncowa<<endl;



system("pause");
return 0;     
}


